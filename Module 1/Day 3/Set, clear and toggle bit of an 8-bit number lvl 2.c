#include <stdio.h>
unsigned char setBit(unsigned char num, int position) {
    return num | (1 << position);
}
unsigned char clearBit(unsigned char num, int position) {
    return num & ~(1 << position);
}
unsigned char toggleBit(unsigned char num, int position) {
    return num ^ (1 << position);
}

int main() {
    unsigned char num;
    int bitPosition;

    printf("Enter a number (in hexadecimal format, e.g., 0x55): ");
    scanf("%hhx", &num);
    printf("Enter the bit position to modify (0-7): ");
    scanf("%d", &bitPosition);
    printf("Original Number: 0x%02X\n", num);
    num = setBit(num, bitPosition);
    printf("Number after setting bit %d: 0x%02X\n", bitPosition, num);
    num = clearBit(num, bitPosition);
    printf("Number after clearing bit %d: 0x%02X\n", bitPosition, num);
    num = toggleBit(num, bitPosition);
    printf("Number after toggling bit %d: 0x%02X\n", bitPosition, num);

    return 0;
}

