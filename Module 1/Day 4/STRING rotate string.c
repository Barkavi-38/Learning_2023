#include <stdio.h>
#include <string.h>

void rotateLeft(char* str, int positions) {
    int len = strlen(str);
    positions = positions % len;

    char temp[len + 1];
    strcpy(temp, str + positions);
    strncat(temp, str, positions);
    strcpy(str, temp);
}

void rotateRight(char* str, int positions) {
    int len = strlen(str);
    positions = positions % len;

    char temp[len + 1];
    strncpy(temp, str + len - positions, positions);
    temp[positions] = '\0';
    strcat(temp, str);
    strcpy(str, temp);
}

int main() {
    char str[100];
    int positions;
    char direction;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &positions);

    printf("Enter the rotation direction (L/R): ");
    scanf(" %c", &direction);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    if (direction == 'L') {
        rotateLeft(str, positions);
        printf("Rotated string (left): %s\n", str);
    } else if (direction == 'R') {
        rotateRight(str, positions);
        printf("Rotated string (right): %s\n", str);
    } else {
        printf("Invalid rotation direction. Please enter 'L' or 'R'.\n");
    }

    return 0;
}

