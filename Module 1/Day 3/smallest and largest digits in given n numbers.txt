#include <stdio.h>

int findLargestNumber(int num) {
    int largestNum = 0;

    
    for (int i = 0; i < 4; i++) {
        int tempNum = num;

        
        int divisor = 1;
        for (int j = 0; j < i; j++) {
            divisor *= 10;
        }
        tempNum = (tempNum % divisor);

        if (tempNum > largestNum) {
            largestNum = tempNum;
        }
    }

    return largestNum;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Not a valid 4-digit number.\n");
        return 0;
    }

    int largestNumber = findLargestNumber(num);
    printf("Largest number after deleting a single digit: %d\n", largestNumber);

    return 0;
}

