#include<stdio.h>
void main()
{
  int i,j;
  for(i=1;i<=9;i++)
  {
    if(i<=5){
        for(j=4;j>=i;j--)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    else
    {
        for(j=6;j<=i;j++)
        {
            printf("-");
        }
        for(j=17;j>=(2*i-1);j--)
        {
            printf("*");
        }
        printf("\n");
    }
  }
}
/*
----*
---**
--***
-****
*****
*/

