#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapNames(char **name1, char **name2) {
    char *temp = *name1;
    *name1 = *name2;
    *name2 = temp;
}

void sortNames(char *names[], int size) {
    int i, j;
    
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            int k = 0;
            while (names[i][k] != '\0' && names[j][k] != '\0') {
                if (names[i][k] < names[j][k]) {
                    break;
                }
                else if (names[i][k] > names[j][k]) {
                    swapNames(&names[i], &names[j]);
                    break;
                }
                k++;
            }
            if (names[i][k] == '\0' && names[j][k] != '\0') {
                swapNames(&names[i], &names[j]);
            }
        }
    }
}

int main() {
    int size;
    printf("Enter the number of names: ");
    scanf("%d", &size);
    getchar(); 
    
    char *names[size];
    
    printf("Enter the names:\n");
    for (int i = 0; i < size; i++) {
        char temp[100];
        fgets(temp, sizeof(temp), stdin);
        temp[strcspn(temp, "\n")] = '\0'; 
        names[i] = strdup(temp);
    }
    
    printf("\nOriginal order of names:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", names[i]);
    }
    
    sortNames(names, size);
    
    printf("\nSorted order of names:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", names[i]);
    }

    for (int i = 0; i < size; i++) {
        free(names[i]);
    }
    
    return 0;
}


