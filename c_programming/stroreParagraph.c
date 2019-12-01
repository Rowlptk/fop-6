#include<stdio.h>

void main()
{
    char str[500],t,ch, ch1;
    int i = 0;
    printf("Enter Terminating Character : ");
    scanf("%c",&t);
    while(ch != t)
    {
        ch = getchar();
        str[i] = ch;
        i++;
    }
    printf("\n\n ******************************\n");
    //puts(str);
    i = 0;

    while(ch1 != t)
    {
        ch1 = str[i];
        if((ch1 != ' ') && (ch1 != '\n') && (ch1 != t))
        {
            putchar(ch1);
        }
        i++;
    }
}





 //0 = T 1 = H 2 = I 3 = S 4 = \n 5 = I
