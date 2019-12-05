#include<stdio.h>
#include<string.h>

void login();

void main()
{
    login();
}

void login()
{
    char super_usr[5][30] = {"admin","Thanos","Hulk","Tony","Captain"};
    char super_pwd[5][30] = {"pass123","pass","pass1","pass2","pass3"};
    char usr[30],pwd[30];
    int i,flag=0;
    printf("Enter Your username : ");
    gets(usr);
    printf("Enter Your Password : ");
    gets(pwd);

    for(i=0;i<=4;i++)
    {
        if(strcmp(strlwr(super_usr[i]),strlwr(usr)) == 0)
        {
            flag = 1;
            break;
        }
    }


    if(flag == 1 && (strcmp(super_pwd[i],pwd) == 0))
    {
        printf("\nWelcome %s\n",usr);
    }
    else
    {
        printf("\nLogin Failed!\n");
    }
}
