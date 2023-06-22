#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SensorInfo {
    char sensor_id[3];
    float temperature;
    int humidity;
    int light_intensity;
};

void parseDataString(const char* dataString, struct SensorInfo* sensorInfo) {
    
    strncpy(sensorInfo->sensor_id, dataString, 2);
    sensorInfo->sensor_id[2] = '\0';

    const char* tempPos = strstr(dataString, "-T:");
    sensorInfo->temperature = atof(tempPos + 3);

    
    const char* humPos = strstr(dataString, "-H:");
    sensorInfo->humidity = atoi(humPos + 3);


    const char* lightPos = strstr(dataString, "-L:");
    sensorInfo->light_intensity = atoi(lightPos + 3);
}

int main() {
    char dataString[50];
    struct SensorInfo sensorInfo;

    printf("Enter the data string: ");
    fgets(dataString, sizeof(dataString), stdin);
    dataString[strcspn(dataString, "\n")] = '\0';  
    parseDataString(dataString, &sensorInfo);
    
    printf("Sensor Info:\n");
    printf("---------------------\n");
    printf("Sensor ID: %s\n", sensorInfo.sensor_id);
    printf("Temperature: %.1f C\n", sensorInfo.temperature);
    printf("Humidity: %d\n", sensorInfo.humidity);
    printf("Light Intensity: %d%%\n", sensorInfo.light_intensity);
    
    return 0;
}
