#include<stdio.h>

void main()
{
    int n1, n2,a,x;
    FILE *fp;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1,&n2);
    fp = fopen("math.txt","a");
    printf("%d + %d = %d",n1,n2,(n1+n2));
    fprintf(fp,"%d\n",(n1+n2));
    fclose(fp);

    fp = fopen("math.txt","r");
    if(fp == NULL)
    {
        printf("file not found!");
        exit(0);
    }
    while(fscanf(fp,"%d",&a) == 1);

    printf("Enter a number to subtract : ");
    scanf("%d",&x);
    printf("%d - %d = %d",a,x,(a-x));
    fclose(fp);
    fp = fopen("math.txt","a");
    fprintf(fp,"%d\n",(a-x));
    fclose(fp);

}
