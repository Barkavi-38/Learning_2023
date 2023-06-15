#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(void* a, void* b, size_t size) {
    void* temp = malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp);
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y, sizeof(int));
    printf("After swap: x = %d, y = %d\n", x, y);

    float a, b;
    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &a, &b);
    printf("Before swap: a = %.2f, b = %.2f\n", a, b);
    swap(&a, &b, sizeof(float));
    printf("After swap: a = %.2f, b = %.2f\n", a, b);

    char c1, c2;
    printf("Enter two characters: ");
    scanf(" %c %c", &c1, &c2);
    printf("Before swap: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swap: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}

