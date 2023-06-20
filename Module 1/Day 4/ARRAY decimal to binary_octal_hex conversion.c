#include <stdio.h>

void decimalToBinary(int decimalNum) {
    if (decimalNum > 1) {
        decimalToBinary(decimalNum / 2);
    }
    printf("%d", decimalNum % 2);
}

void decimalToOctal(int decimalNum) {
    if (decimalNum > 7) {
        decimalToOctal(decimalNum / 8);
    }
    printf("%d", decimalNum % 8);
}

void decimalToHexadecimal(int decimalNum) {
    if (decimalNum > 15) {
        decimalToHexadecimal(decimalNum / 16);
    }
    int remainder = decimalNum % 16;
    if (remainder < 10) {
        printf("%d", remainder);
    } else {
        printf("%c", 'A' + (remainder - 10));
    }
}

int main() {
    int inputDecimalNum;

    printf("Enter a decimal number: ");
    scanf("%d", &inputDecimalNum);

    printf("Binary number: ");
    decimalToBinary(inputDecimalNum);

    printf("\nOctal number: ");
    decimalToOctal(inputDecimalNum);

    printf("\nHexadecimal number: ");
    decimalToHexadecimal(inputDecimalNum);

    printf("\n");

    return 0;
}

