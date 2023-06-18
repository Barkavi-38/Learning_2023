#include <stdio.h>

void encodeString(char *string, int shift) {
    char *ptr = string;
    
    while (*ptr != '\0') {
        if (*ptr != ' ') {
            *ptr = (*ptr + shift) % 128;
        }
        ptr++;
    }
}

void decodeString(char *string, int shift) {
    char *ptr = string;
    
    while (*ptr != '\0') {
        if (*ptr != ' ') {
            *ptr = (*ptr - shift + 128) % 128;
        }
        ptr++;
    }
}

int main() {
    char string[100];
    int shift;

    printf("Enter a string to encode: ");
    fgets(string, sizeof(string), stdin);
    
    printf("Enter the shift amount: ");
    scanf("%d", &shift);
    encodeString(string, shift);
    printf("Encoded string: %s\n", string);
    decodeString(string, shift);
    printf("Decoded string: %s\n", string);

    return 0;
}
