#include <stdio.h>
#include <ctype.h>

int findChar(char c) {
    if (isupper(c)) {
        return 1;  // 'A' to 'Z'
    } else if (islower(c)) {
        return 2;  // 'a' to 'z'
    } else if (isdigit(c)) {
        return 3;  // '0' to '9'
    } else if (isprint(c)) {
        return 4;  // Any other printable symbols
    } else {
        return 5;  // Non-printable symbols
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    int result = findChar(ch);

    switch (result) {
        case 1:
            printf("Type: 'A' to 'Z'\n");
            break;
        case 2:
            printf("Type: 'a' to 'z'\n");
            break;
        case 3:
            printf("Type: '0' to '9'\n");
            break;
        case 4:
            printf("Type: Any other printable symbol\n");
            break;
        case 5:
            printf("Type: Non-printable symbol\n");
            break;
        default:
            printf("Invalid character\n");
            break;
    }

    return 0;
}

