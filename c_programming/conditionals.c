// positive

#include<stdio.h>
// leap year

void main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    if(n>0)
    {
        printf("number is positive");
    }
    else if(n == 0)
    {
        printf("number is zero");
    }
    else
    {
        printf("number is negative");
    }
}






/*
year ==> 400  ==> 1600 2000 2400

year ==> 4 but not 100 ==> 1700 ==> 1696


 year ==> (y%400 == 0) || ((y%4 == 0)&&( y%100 != 0))


*/





