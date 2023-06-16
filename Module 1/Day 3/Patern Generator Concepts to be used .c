#include<stdio.h>

void number_pattern(int n){
    
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        printf("%d",j);
    
    
    for(int j=0;j<2*(n-i);j++)
    {
        printf(" ");
    }
    for(int j=i;j>=1;j--){
        
        printf("%d",j);
    }
    
    printf("\n");
 }  
 
} 

int main()
{
    int n;
    printf("Enter the n value : ");
    scanf("%d",&n);
    number_pattern(n);
    return 0;
}
