#include<stdio.h>

void main()
{
    int a[10],i,j,flag;
    printf("Enter 10 Values : \n");
    for(i=0;i<=9;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("\nThe Values Stored in Array are: \n");
    for(i=0;i<=9;i++)
    {
        printf("value %d = %d\n",(i+1),a[i]);
    }
    printf("\nEven Numbers Are : \n");
    for(i=0;i<=9;i++)
    {
        if(a[i]%2 == 0)
        {
            printf("%d\n",a[i]);
        }
    }
    printf("\nOdd Numbers Are : \n");
    for(i=0;i<=9;i++)
    {
        if(a[i]%2 != 0)
        {
            printf("%d\n",a[i]);
        }
    }
    printf("\nPrime Numbers Are : \n");
    for(i=0;i<=9;i++)
    {
        flag = 0;
        if(a[i]==0 || a[i]==1)
        {
            flag = 1;
        }

        for(j=2;j<=(a[i]/2);j++)
        {
            if(a[i]%j == 0)
            {
                flag = 1;
                break;
            }
        }
        if( flag == 0)
        {
            printf("%d\n",a[i]);
        }
    }
}



