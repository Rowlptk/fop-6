#include<stdio.h>

void main()
{
    float n1, n2;
    char ch;
    printf("Enter two numbers : ");
    scanf("%f%f",&n1,&n2);
    printf("Which Operation You want to perform\n+, - , * , /\nSelect: ");
    scanf(" %c",&ch);
    switch(ch)
    {
    case '+':
        printf("%.2f + %.2f = %.2f",n1,n2,(n1+n2));
        break;
    case '-':
        printf("%.2f - %.2f = %.2f",n1,n2,(n1-n2));
        break;
    case '*':
        printf("%.2f * %.2f = %.2f",n1,n2,(n1*n2));
        break;
    case '/':
        printf("%.2f / %.2f = %.2f",n1,n2,(n1/n2));
        break;
    default:
        printf("Invalid Options");
    }
}
