#include<stdio.h>
int main()
{
    double oper1,oper2, result;
    char operator;
   
    printf("Enter operand 1: ");
    scanf("%lf", &oper1);

    printf("Enter the operator : ");
    scanf(" %c", &operator);

    printf("Enter operand2: ");
    scanf("%lf", &oper2);
   
    switch(operator)
    {
        case'+':
          printf("%.1lf + %.1lf = %.1lf",oper1,oper2, oper1+oper2);
          break;
        case'-':
          printf("%.1lf - %.1lf = %.1lf",oper1,oper2, oper1-oper2);
          break;
        case'*':
          printf("%.1lf * %.1lf = %.1lf",oper1,oper2, oper1*oper2);
          break;
        case'/':
          printf("%.1lf / %.1lf = %.1lf",oper1,oper2, oper1/oper2);
          break;
         
        default:
          printf("operator is invalide");
    }
}