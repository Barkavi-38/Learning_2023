#include <stdio.h>

int main() {
    int array[100]; 
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }

    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += array[i];
    }

    printf("Sum of every alternate element: %d\n", sum);

    return 0;
}

