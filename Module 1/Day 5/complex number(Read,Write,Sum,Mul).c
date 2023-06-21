#include <stdio.h>

struct Complex {
    double real;
    double imag;
};

struct Complex readComplex() {
    struct Complex complexNum;

    printf("Enter the real part: ");
    scanf("%lf", &complexNum.real);

    printf("Enter the imaginary part: ");
    scanf("%lf", &complexNum.imag);

    return complexNum;
}

void writeComplex(struct Complex complexNum) {
    printf("Complex number: %.2lf + %.2lfi\n", complexNum.real, complexNum.imag);
}

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex sum;

    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    return sum;
}

struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex product;

    product.real = (num1.real * num2.real) - (num1.imag * num2.imag);
    product.imag = (num1.real * num2.imag) + (num1.imag * num2.real);

    return product;
}

int main() {
    struct Complex complex1, complex2, sum, product;

    printf("Enter the first complex number:\n");
    complex1 = readComplex();

    printf("\nEnter the second complex number:\n");
    complex2 = readComplex();

    printf("\n");

    writeComplex(complex1);
    writeComplex(complex2);

    sum = addComplex(complex1, complex2);
    printf("\nSum of the two complex numbers: ");
    writeComplex(sum);

    product = multiplyComplex(complex1, complex2);
    printf("Product of the two complex numbers: ");
    writeComplex(product);

    return 0;
}

