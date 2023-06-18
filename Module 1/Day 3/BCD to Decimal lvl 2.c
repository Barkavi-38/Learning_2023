#include <stdio.h>
unsigned char decimalToBCD(unsigned char decimal) {
    return ((decimal / 10) << 4) | (decimal % 10);
}

int main() {
    unsigned char decimal;
    unsigned char bcd;

    printf("Enter a decimal number: ");
    scanf("%hhu", &decimal);

    bcd = decimalToBCD(decimal);

    printf("BCD representation: 0x%02X\n", bcd);

    return 0;
}
