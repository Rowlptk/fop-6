#include<stdio.h>

struct bookStore
{
    char name[50];
    float price;
    int pages;
    char genre;
}b[50];

void main()
{
    int n,i,flag = 0;
    char book[50],x[50];
    FILE *fp;
    fp = fopen("bookStore.txt","a");
   //struct bookStore b1,b2;
   printf("How many Books you want to store : ");
   scanf("%d",&n);
   getchar();
   for(i=0;i<n;i++)
   {
        printf("Enter book %d name : ",(i+1));
        gets(b[i].name);
        fprintf(fp,"%s\t",b[i].name);
        printf("Enter book %d price : ",(i+1));
        scanf("%f",&b[i].price);
        fprintf(fp,"%f\t",b[i].price);
        printf("Enter book %d pages : ",(i+1));
        scanf("%d",&b[i].pages);
        fprintf(fp,"%d\t",b[i].pages);
        printf("Enter book %d genre : ",(i+1));
        scanf(" %c",&b[i].genre);
        fprintf(fp,"%c\n",b[i].genre);
        getchar();
        printf("\n");
   }
    fclose(fp);
   /*for(i=0;i<n;i++)
   {
        printf("\n***************** book %d ***********************\n",(i+1));
        printf("Name = %s\nPrice = $%.2f\nPages = %d\nGenre = %c\n",b[i].name,b[i].price,b[i].pages,b[i].genre);
        printf("************************************************\n\n");
   }

   printf("Enter Book name you want to view : ");
   gets(book);
   for(i=0;i<n;i++)
   {
       strcpy(x,b[i].name);
       if(strcmp(strlwr(x),strlwr(book)) == 0)
        {
            flag = 1;
            break;
        }
   }
   system("cls");
   if(flag == 1)
   {
        printf("\n***************** book %d ***********************\n",(i+1));
        printf("Name = %s\nPrice = $%.2f\nPages = %d\nGenre = %c\n",b[i].name,b[i].price,b[i].pages,b[i].genre);
        printf("************************************************\n\n");
   }
   else
   {
       printf("\nBook Not Found!\n");
   }*/

}
