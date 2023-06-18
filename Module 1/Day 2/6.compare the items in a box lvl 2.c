#include <stdio.h>

int compareBoxes(int boxA[], int boxB[], int size) {
    int i, j;
    int found;
    
    for (i = 0; i < size; i++) {
        found = 0;
        
        for (j = 0; j < size; j++) {
            if (boxA[i] == boxB[j]) {
                found = 1;
                break;
            }
        }
        
        if (found == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int size;
    printf("Enter the size of the boxes: ");
    scanf("%d", &size);
    
    int boxA[size];
    int boxB[size];
    
    printf("Enter the items of box A:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &boxA[i]);
    }
    
    printf("Enter the items of box B:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &boxB[i]);
    }
    
    int result = compareBoxes(boxA, boxB, size);
    
    printf("Result: %d\n", result);
    
    return 0;
}

