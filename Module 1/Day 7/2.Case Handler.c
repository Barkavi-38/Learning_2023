#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define BUFFER_SIZE 4096

void convertToUpper(char* str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

void convertToLower(char* str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}

void convertToSentenceCase(char* str) {
    int sentenceBegin = 1;
    while (*str) {
        if (sentenceBegin) {
            *str = toupper(*str);
            sentenceBegin = 0;
        } else {
            *str = tolower(*str);
        }
        
        if (*str == '.' || *str == '?' || *str == '!') {
            sentenceBegin = 1;
        }
        
        str++;
    }
}

int main() {
    char option[3];
    char source_file_path[100];
    char destination_file_path[100];

    printf("Enter the option (-u, -l, -s): ");
    scanf("%2s", option);

    printf("Enter the path of the source file: ");
    scanf("%99s", source_file_path);

    printf("Enter the path of the destination file: ");
    scanf("%99s", destination_file_path);

    FILE* source_file = fopen(source_file_path, "r");
    if (source_file == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }
    
    FILE* destination_file = fopen(destination_file_path, "w");
    if (destination_file == NULL) {
        printf("Failed to create the destination file.\n");
        fclose(source_file);
        return 1;
    }
    
    char buffer[BUFFER_SIZE];
    size_t bytes_read;
    
    while ((bytes_read = fread(buffer, 1, sizeof(buffer), source_file)) > 0) {
        if (strcmp(option, "-u") == 0) {
            convertToUpper(buffer);
        } else if (strcmp(option, "-l") == 0) {
            convertToLower(buffer);
        } else if (strcmp(option, "-s") == 0) {
            convertToSentenceCase(buffer);
        }
        fwrite(buffer, 1, bytes_read, destination_file);
    }
    
    fclose(source_file);
    fclose(destination_file);
    
    printf("File copied successfully.\n");
    
    return 0;
}

