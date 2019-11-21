#include<stdio.h>

void main()
{
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    (num1>num2)?printf("num1 is greater"):
        printf("num2 is greater");
}
