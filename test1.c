#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void main()
{
        int num = 0;
        char word[500];
        char string[500];
        FILE *fp = fopen("student.txt", "r");
            if (fp == NULL)
            {
                printf("Error file missing\n");
                exit(0);
            }
            printf("please enter a word\n");
            gets(string);
            while ( fscanf(fp,"%s", word) == 1)
            {
                if(strstr(string, word)!=0) {
                        num++;
                }
            }
            printf("we found the word %s in the file %d times\n",string,num );
            num = 0;
            fclose(fp);
}
