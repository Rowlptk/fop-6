#include<stdio.h>

void main()
{
    int ary[5] = {2,6,100,0,-50}; // direct assignment
    printf("%d ",ary[2]);
    ary[2] = 99; // index assignment
    printf(" %d ",ary[2]);

    printf("\n%d ",ary[0]);
    printf("Enter 1st array value : ");
    scanf("%d",&ary[0]);
    printf("ary[%d] = %d ",0,ary[0]);
}
