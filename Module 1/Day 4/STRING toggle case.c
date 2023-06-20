#include <stdio.h>
#include <string.h>
void toggleCase(char *str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32;
        } else if (*str >= 'A' && *str <= 'Z') {
            *str = *str + 32;
        }
        str++;
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    
    printf("Before toggling case: %s\n", str);
    toggleCase(str);
    printf("After toggling case: %s\n", str);
    
    return 0;
}

