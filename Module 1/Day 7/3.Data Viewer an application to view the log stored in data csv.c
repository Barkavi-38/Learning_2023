#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[10];
} LogEntry;

LogEntry logArray[MAX_ENTRIES];
int numOfEntries = 0;

void extractData(const char* line, LogEntry* entry) {
    sscanf(line, "%d,%[^,],%f,%d,%d,%[^,]",
           &entry->entryNo, entry->sensorNo, &entry->temperature, &entry->humidity, &entry->light, entry->time);
}

void readDataFromFile(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file: %s\n", filename);
        return;
    }

    char line[256];
    fgets(line, sizeof(line), file);  // skip header line

    while (fgets(line, sizeof(line), file)) {
        LogEntry entry;
        extractData(line, &entry);
        logArray[numOfEntries++] = entry;
    }

    fclose(file);
}

void displayLog() {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTime\n");
    for (int i = 0; i < numOfEntries; i++) {
        LogEntry entry = logArray[i];
        printf("%d\t%s\t%.1f\t\t%d\t\t%d\t%s\n",
               entry.entryNo, entry.sensorNo, entry.temperature, entry.humidity, entry.light, entry.time);
    }
}

int main() {
    char filename[100];
    printf("Enter the name of the CSV file: ");
    scanf("%s", filename);

    readDataFromFile(filename);
    displayLog();

    return 0;
}

