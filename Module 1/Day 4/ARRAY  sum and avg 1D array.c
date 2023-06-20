#include <stdio.h>

void calculateSumAndAverage(int arr[], int length, int *sum, float *avg) {
    *sum = 0; 

    for (int i = 0; i < length; i++) {
        *sum += arr[i]; 
    }

    *avg = (float)(*sum) / length; 
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int userArray[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &userArray[i]);
    }

    int sumResult;
    float avgResult;

    calculateSumAndAverage(userArray, size, &sumResult, &avgResult);

    printf("Sum: %d\n", sumResult);
    printf("Average: %.2f\n", avgResult);

    return 0;
}

