#include<stdio.h>
#include<conio.h>
int word_count(char*);

int main()
{
    char cSrc[40] = "";


    printf("\n Enter A String :");
    gets(cSrc);

    printf("\n Word Count of given string is :%d",word_count(cSrc));

    getch();
    return 0;
}
 int word_count(char *src)
 {
     int i =0,wcnt =0;

     while(src[i]!='\0')
     {
         while(src[i]==' '||src[i]==','||src[i]=='.'||src[i]=='\t'||src[i] =='?')
         {
             i++;
         }
         if(src[i]!='\0')
         {
             wcnt++;
         }
         while(src[i]!='\0' && src[i]!=',' && src[i]!='.' && src[i]!='\t' && src[i] !=' ')
         {
             i++;
         }

     }
     return wcnt;
 }
