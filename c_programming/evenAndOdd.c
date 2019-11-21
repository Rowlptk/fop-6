// 80-100==> A
// 60-80 ==> B
// 40-60 ==> C
// 0-40 ==> F
#include<stdio.h>

void main()
{
    int n;
    printf("Enter any number");
    scanf("%d",&n);
    if(n%2 == 0)
    {
        printf("Even numbers: ");
    }
    else
    {
        printf("Odd numbers : ");
    }
}
