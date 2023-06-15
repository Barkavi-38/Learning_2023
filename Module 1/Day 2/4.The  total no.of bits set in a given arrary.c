#include <stdio.h>

int countBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int array[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(array) / sizeof(array[0]);

    int totalBits = 0;
    for (int i = 0; i < size; i++) {
        totalBits += countBits(array[i]);
    }

    printf("Total number of set bits in the array: %d\n", totalBits);

    return 0;
}

