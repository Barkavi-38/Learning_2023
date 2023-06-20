#include <stdio.h>

void reverseArray(int arr[], int len) {
    int start = 0;
    int end = len - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
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

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", userArray[i]);
    }
    printf("\n");

    reverseArray(userArray, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", userArray[i]);
    }
    printf("\n");

    return 0;
}

