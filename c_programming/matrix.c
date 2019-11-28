#include<stdio.h>

void main()
{
    int m[3][3],i,j;
    printf("Fill 3x3 Matrix : ");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}
