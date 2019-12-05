#include<stdio.h>
#include"myhead.h"

void add();     // function declaration

void main()
{
    add();  // function Call
    //int x = mul(10,5);
    //printf("The mul is %d",mul(2,3));
}


// function definition
void add()
{
    int a, b;
    printf("Enter Two numbers : ");
    scanf("%d%d",&a,&b);
    printf("%d + %d = %d\n",a,b,(a+b));
    printf("The mul is %d",mul(a,b));
}

// Avengers Bank
login ==> 5 ==> max 3 wrong attempt
menu ==> withdraw, deposit, exit, checkbalance
Initial balance = 1000


//int add()  // parameterless function
//int add(int a, int b) // parameterized function.





