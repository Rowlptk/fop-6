#include<stdio.h>
#include<string.h>


void main()
{
    char str1[50] = "Welcome to C Programming";
    printf("The Length is %d\n",strlen(str1));
    printf("UpperCase = %s\n",strupr(str1));
    printf("LowerCase = %s\n",strlwr(str1));
    printf("Reverse = %s\n",strrev(str1));
}
