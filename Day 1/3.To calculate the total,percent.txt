#include<stdio.h>
#include<string.h>
int main()
{
    int rollNum,total;
    float per,phy,mat,che;
    char name[30];
    printf("Enter Roll No: ");
    scanf("%d", &rollNum);

    printf("Enter Name: ");
    scanf(" %[^\n]s", name);
   
    printf("Enter Marks Physics Math Chemistry : ");
    scanf("%f %f %f", &phy, &mat, &che);
   
    total = phy+che+mat;
   
    per = total/3;
   
    printf("Roll No: %d\n", rollNum);
    printf("Name: %s\n", name);
    printf("Physics: %.2f\n", phy);
    printf("Maths: %.2f\n", mat);
    printf("Chemistry: %.2f\n", che);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", per);
   
    return 0;
}