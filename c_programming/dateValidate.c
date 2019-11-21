#include<stdio.h>
// y>=1000 to y<=3000
// m>=1 to m<=12
// d>=1 to d<=30

void main()
{
    int y, m, d;
    printf("Enter a date [yyyy-mm-dd] : ");
    scanf("%d-%d-%d",&y,&m,&d);
   // printf("year = %d\nmonth = %d\nday = %d\n",y,m,d);
    if(y>=1000 && y<=3000)
    {
        if(m>=1 && m<=12)
        {
            if((d>=1 && d<=31)&&(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12))
            {
                printf("Date is valid");
            }
            else if((d>=1 && d<=30)&&(m==4 || m==6 || m==9 || m==11))
            {
                printf("Date is valid");
            }
            else if((d>=1 && d<=28)&&(m==2))
            {
                printf("Date is valid");
            }
            else if((d>=1 && d<=29)&&(m==2)&&((y%400 == 0)||((y%4==0)&&(y%100!=0))))
            {
                printf("Date is valid");
            }
            else
            {
                printf("Day is invalid!");
            }
            /*
            if(d>=1 && d<=30)
            {
                printf("Date valid")
            }
            else
            {
                printf("Day is invalid")
            }*/
        }
        else
        {
            printf("month is invalid");
        }
    }
    else
    {
        printf("Invalid Year");
    }
}



/*
1. jan = > 31
2. feb = > 28  / 29(leap year)
3. mar = > 31
4. apr = > 30
5. may = > 31
6. jun = > 30
7. jul = > 31
8. Aug = > 31
9. Sep = > 30
10. Oct => 31
11. Nov => 30
12. Dec => 31

*/







