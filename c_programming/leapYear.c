#include<stdio.h>
void main()
{
    int y;
    printf("Enter any Year : ");
    scanf("%d",&y);
    if((y%400 == 0) || ((y%4 == 0)&&( y%100 != 0)))
    {
        printf("I am a leap a year");
    }
    else
    {
        printf("I am not a leap year");
    }
}
