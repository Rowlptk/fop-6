#include<stdio.h>

void main()
{
    int i,n,m;
    printf("Kun Wanza? ");
    scanf("%d",&n);
    printf("Start Point ");
    scanf("%d",&i);
    printf("End Point ");
    scanf("%d",&m);
    while(i<=m)
    {
        printf("%d x %d = %d\n",n,i,(n*i));
        i++;
    }
}
