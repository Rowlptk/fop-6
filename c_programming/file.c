/*file ==> secondary storage => HDD
two types ==> text file
        ==> binary file

file operations ==> open
                    read/write
                    close*/
//strstr(sentence,str)
#include<stdio.h>

void main()
{
    FILE *fp;
    char res[1000],res1[1000];
    int flag = 0;
    //fp = fopen("C:\\Users\\Neosphere\\Desktop\\demo-fop6.txt","w");
    //fp = fopen("demo.txt","a");
    //fprintf(fp," tomato");

    fp = fopen("demo.txt","r");
    if (fp == NULL)
    {
        printf("File not Found!");
        exit(0);
    }

    printf("Enter a search string : ");
    gets(res);

    while(fscanf(fp,"%s",res1) == 1)
    {
        //if(strstr(res1,res)!=0)
        if(strcmp(res1,res)==0)
        {
            flag = 1;
            break;
        }

    }

    if (flag == 1)
    {
        puts(res);
    }
    else
    {
        printf("word doesnot exist!");
    }
    //fscanf(fp,"%s%s", res, res1);
    //puts(res);
    //puts(res1);
    fclose(fp);
}














