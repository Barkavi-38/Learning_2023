#include<stdio.h>  
 
int main()  
{  
    int a, b, bigNumber;  
 
    printf("Enter 2 numbers\n");  
    scanf("%d%d", &a, &b);  
    bigNumber = a>b ? a : b;
    printf("Biggest number of %d and %d is %d\n", a, b, bigNumber);  
    return 0;  
}  