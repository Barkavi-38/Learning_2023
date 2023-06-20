#include <stdio.h>

void findMinMax(int arr[], int len, int *min, int *max) {
    *min = arr[0];
    *max = arr[0]; 

    for (int i = 1; i < len; i++) {
        if (arr[i] < *min) {
            *min = arr[i]; 
        }
        else if (arr[i] > *max) {
            *max = arr[i]; 
        }
    }
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

    int minResult, maxResult;

    findMinMax(userArray, size, &minResult, &maxResult);

    printf("Minimum value: %d\n", minResult);
    printf("Maximum value: %d\n", maxResult);

    return 0;
}

