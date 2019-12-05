#include<stdio.h>
#include<string.h>
#include<time.h>
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

void login();
void menu();
void checkbalance();
void withdraw();
void deposit();
void proceed();

int totalBalance = 6000;

void main()
{
    login();
}

void proceed()
{
    char ch;
    printf("\nPress Y to continue... ");
    scanf(" %c",&ch);
    if(ch=='Y'||ch=='y')
    {
        menu();
    }
    else
    {
        printf("Thank you for Banking!\n\nSee you soon...\n");
    }
}


void deposit()
{
    int da;
    printf("Enter Deposit Amount : ");
    scanf("%d",&da);
    if(da<=5000)
    {
        totalBalance += da;
        printf("\nDeposited Amount : $ %d\n",da);
        delay(2000);
        printf("\nCurrent Balance : $ %d\n",totalBalance);
    }
    else
    {
        printf("\nAmount Exceeds Per transaction amount\n");
    }
}

void withdraw()
{
    int wa;
    printf("\nEnter Withdraw Amount : ");
    scanf("%d",&wa);
    if( wa%500 == 0)
    {
        if( wa <= totalBalance )
        {
            if( wa <= 5000 )
            {
                //totalBalance = totalBalance - wa;
                totalBalance -= wa;
                printf("\nWithdraw Amount : $ %d",wa);
                printf("\nAvailable Balance : $ %d\n",totalBalance);
            }
            else
            {
                printf("\nAmount must be less than  $ 5000\n");
            }
        }
        else
        {
            printf("\nInsufficient Balance!\n");
        }
    }
    else
    {
        printf("\nAmount should be multiple of 500\n");
    }
}

void checkbalance()
{
    printf("\nYour current Balance is $ %d\n",totalBalance);
}


void menu()
{
    int opt;
    printf("********* Welcome to Avengers Bank *********\n");
    printf("Options :\n1.Check Balance\n2.Withdraw\n3.Deposit\n4.Exit\n  Select : ");
    scanf("%d",&opt);
    system("cls");
    switch(opt)
    {
    case 1:
        checkbalance();
        proceed();
        break;
    case 2:
        withdraw();
        proceed();
        break;
    case 3:
        deposit();
        proceed();
        break;
    case 4:
        exit(0);

    default:
        printf("\nInvalid option!\n");
        proceed();
    }
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

    system("cls");
    if(flag == 1 && (strcmp(super_pwd[i],pwd) == 0))
    {
        printf("\nWelcome %s\n\n",usr);
        menu();

    }
    else
    {
        printf("\nLogin Failed!\n");
    }
}
