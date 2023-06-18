#include <stdio.h>

int countSetBits(int num) {
    int count = 0;

    while (num > 0) {
        count += num & 1;
        num >>= 1;
    }

    return count;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size];
    printf("Enter the elements of the array in hexadecimal format:\n");
    for (int i = 0; i < size; i++) {
        scanf("%x", &a[i]);
    }

    int totalSetBits = 0;
    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(a[i]);
    }

    printf("The total number of set bits in the given array is: %d\n", totalSetBits);

    return 0;
}
