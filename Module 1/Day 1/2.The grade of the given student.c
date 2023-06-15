#include<stdio.h>
int main()
{
    int mark;
    printf("enter the mark");
    scanf("%d",&mark);
    if(mark<0 || mark>100)
    {
        printf("Wrong entry");
    }
    else if(mark<50)
    {
        printf("Grade E");
    }
    else if(mark>=50&&mark<60)
    {
        printf("Grade D");
    }
    else if(mark>=60&&mark<75)
    {
        printf("Grade C");
    }
    else if(mark>=75&&mark<90)
    {
        printf("Grade B");
    }
    else
    {
        printf("Grade A");
    }
}
