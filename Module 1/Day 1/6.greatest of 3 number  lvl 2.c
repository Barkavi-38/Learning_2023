#include<stdio.h>

int greatest_Number(int num1,int num2,int num3){
    
    if(num1>num2 && num1>num2){
        return num1;
    }
    else if(num2>num1 && num2>num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}
int main()
{
    int result,num1,num2,num3;
    printf("Enter the three numbers :");
    scanf("%d%d%d",&num1,&num2,&num3);
    result = greatest_Number(num1,num2,num3);
    printf("the greatest number is %d\n", result);
    return 0;
}

