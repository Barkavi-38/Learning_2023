#include <stdio.h>

#define BUFFER_SIZE 4096

int main() {
    FILE* source_file;
    FILE* destination_file;
    char buffer[BUFFER_SIZE];
    size_t bytes_read;

    char source_file_path[100];
    char destination_file_path[100];

    printf("Enter the path of the source file: ");
    scanf("%s", source_file_path);

    printf("Enter the path of the destination file: ");
    scanf("%s", destination_file_path);
    source_file = fopen(source_file_path, "rb");
    if (source_file == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }

    
    destination_file = fopen(destination_file_path, "wb");
    if (destination_file == NULL) {
        printf("Failed to create the destination file.\n");
        fclose(source_file);
        return 1;
    }

    
    while ((bytes_read = fread(buffer, 1, sizeof(buffer), source_file)) > 0) {
        fwrite(buffer, 1, bytes_read, destination_file);
    }

    
    fclose(source_file);
    fclose(destination_file);

    printf("File copied successfully.\n");

    return 0;
}

