#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long totalSeconds(const char* timeStr) {
    char* token;
    unsigned long totalSec = 0;
    unsigned long hours, minutes, seconds;
    token = strtok((char*)timeStr, ":");
    hours = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    minutes = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    seconds = strtoul(token, NULL, 10);
    totalSec = hours * 3600 + minutes * 60 + seconds;

    return totalSec;
}

int main() {
    char timeStr[100];
    unsigned long totalSec;

    printf("Enter time in the format hh:mm:ss: ");
    fgets(timeStr, sizeof(timeStr), stdin);
    if (timeStr[strlen(timeStr) - 1] == '\n') {
        timeStr[strlen(timeStr) - 1] = '\0';
    }
    totalSec = totalSeconds(timeStr);

    printf("Total seconds: %lu\n", totalSec);

    return 0;
}

