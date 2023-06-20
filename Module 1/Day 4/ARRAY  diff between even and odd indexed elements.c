#include <stdio.h>

int main() {
    int numElements;

    printf("Enter the number of elements: ");
    scanf("%d", &numElements);

    int array[numElements];

    printf("Enter the integers:\n");
    for (int i = 0; i < numElements; i++) {
        scanf("%d", &array[i]);
    }

    int sumEvenIndexed = 0;
    int sumOddIndexed = 0;

    for (int i = 0; i < numElements; i++) {
        if (i % 2 == 0) {
            sumEvenIndexed += array[i];
        } else {
            sumOddIndexed += array[i];
        }
    }

    printf("Sum of even indexed elements: %d\n", sumEvenIndexed);
    printf("Sum of odd indexed elements: %d\n", sumOddIndexed);

    return 0;
}

