#include <stdio.h>
#include <stdlib.h>

int main() {
    int* numbers;
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    numbers = (int*)malloc(size * sizeof(int));

    printf("Enter the integers:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) {
            sumEven += numbers[i];
        } else {
            sumOdd += numbers[i];
        }
    }

    printf("Sum of even elements: %d\n", sumEven);
    printf("Sum of odd elements: %d\n", sumOdd);

    free(numbers);

    return 0;
}

