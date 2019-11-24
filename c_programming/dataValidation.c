/*
output:

    enter first number: -8
    please enter positive value only: -3
    please enter positive value only: -4
    please enter positive value only: 2

    enter second number: -100
    please enter positive value only: -7
    please enter positive value only: 4

    2 + 4 = 6
*/

#include<stdio.h>
void main()
{
    int n1, n2;
    printf("Enter First Number : ");
    scanf("%d",&n1);
    while(n1<0)
    {
        printf("Please Enter Positive Value only: ");
        scanf("%d",&n1);
    }

    printf("\nEnter Second Number : ");
    scanf("%d",&n2);
    while(n2<0)
    {
        printf("Please Enter Positive Value only: ");
        scanf("%d",&n2);
    }

    printf("\n%d + %d = %d",n1,n2,(n1+n2));

}








