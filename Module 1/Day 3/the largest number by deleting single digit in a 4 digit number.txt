#include <stdio.h>

void findSmallestAndLargestDigits(int num) {
    int smallestDigit = 9;
    int largestDigit = 0;

    while (num > 0) {
        int digit = num % 10;

        if (digit < smallestDigit) {
            smallestDigit = digit;
        }

        if (digit > largestDigit) {
            largestDigit = digit;
        }

        num /= 10;
    }

    printf("Smallest digit: %d\n", smallestDigit);
    printf("Largest digit: %d\n", largestDigit);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Not Valid\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        int num;
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        findSmallestAndLargestDigits(num);
    }

    return 0;
}

