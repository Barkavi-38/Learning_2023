#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box *box) {
    return box->length * box->width * box->height;
}

double calculateSurfaceArea(struct Box *box) {
    return 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    struct Box myBox;
    struct Box *ptrBox;

    printf("Enter the length of the box: ");
    scanf("%lf", &myBox.length);

    printf("Enter the width of the box: ");
    scanf("%lf", &myBox.width);

    printf("Enter the height of the box: ");
    scanf("%lf", &myBox.height);

    printf("\nBox dimensions using dot operator:\n");
    printf("Length: %.2f\n", myBox.length);
    printf("Width: %.2f\n", myBox.width);
    printf("Height: %.2f\n", myBox.height);

    ptrBox = &myBox;

    printf("\nBox dimensions using pointer and indirection operator:\n");
    printf("Length: %.2f\n", (*ptrBox).length);
    printf("Width: %.2f\n", (*ptrBox).width);
    printf("Height: %.2f\n", (*ptrBox).height);

    double boxVolume = calculateVolume(&myBox);
    double boxSurfaceArea = calculateSurfaceArea(ptrBox);

    printf("\nBox volume: %.2f\n", boxVolume);
    printf("Box surface area: %.2f\n", boxSurfaceArea);

    return 0;
}

