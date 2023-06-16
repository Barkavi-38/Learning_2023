#include <stdio.h>

void print_bits(unsigned int num) {
    int num_bits = sizeof(num) * 8;
    for (int i = num_bits - 1; i >= 0; i--) {
        unsigned int bit = (num >> i) & 1;
        printf("%u", bit);
    }

    printf("\n");
}

int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);
    printf("Bits: ");
    print_bits(num);
    return 0;
}

