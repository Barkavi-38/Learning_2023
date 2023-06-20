#include <stdio.h>
#include <math.h>

long long binaryToDecimal(long long binaryNumber) {
    long long decimalNumber = 0;
    int digit, exponent = 0;

    while (binaryNumber != 0) {
        digit = binaryNumber % 10;
        decimalNumber += digit * pow(2, exponent);
        exponent++;
        binaryNumber /= 10;
    }

    return decimalNumber;
}

long long octalToDecimal(long long octalNumber) {
    long long decimalNumber = 0;
    int digit, exponent = 0;

    while (octalNumber != 0) {
        digit = octalNumber % 10;
        decimalNumber += digit * pow(8, exponent);
        exponent++;
        octalNumber /= 10;
    }

    return decimalNumber;
}

long long hexToDecimal(char hexadecimalNumber[]) {
    long long decimalNumber = 0;
    int digit, exponent = 0;

    for (int i = 0; hexadecimalNumber[i] != '\0'; i++) {
        if (hexadecimalNumber[i] >= '0' && hexadecimalNumber[i] <= '9') {
            digit = hexadecimalNumber[i] - '0';
        } else if (hexadecimalNumber[i] >= 'A' && hexadecimalNumber[i] <= 'F') {
            digit = hexadecimalNumber[i] - 'A' + 10;
        } else if (hexadecimalNumber[i] >= 'a' && hexadecimalNumber[i] <= 'f') {
            digit = hexadecimalNumber[i] - 'a' + 10;
        }
        decimalNumber = decimalNumber * 16 + digit;
    }

    return decimalNumber;
}

int main() {
    int choice;
    long long binaryNumber, octalNumber;
    char hexadecimalNumber[100];

    printf("Decimal Conversion:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Octal to Decimal\n");
    printf("3. Hexadecimal to Decimal\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%lld", &binaryNumber);
            printf("Decimal number: %lld\n", binaryToDecimal(binaryNumber));
            break;
        case 2:
            printf("Enter an octal number: ");
            scanf("%lld", &octalNumber);
            printf("Decimal number: %lld\n", octalToDecimal(octalNumber));
            break;
        case 3:
            printf("Enter a hexadecimal number: ");
            scanf("%s", hexadecimalNumber);
            printf("Decimal number: %lld\n", hexToDecimal(hexadecimalNumber));
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

