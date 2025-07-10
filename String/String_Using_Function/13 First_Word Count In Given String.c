#include<stdio.h>
#include<conio.h>
int FirstWordCnt(char *);

int main()
{
    char cSrc[40] = " ";

    printf("\n Enter String:");
    gets(cSrc);

    printf("\n Count of 1st word in string is :%d",FirstWordCnt(cSrc));

    getch();
    return 0;
}
int FirstWordCnt(char *Src)
{
    int  i =0,wcnt=0;

    while(Src[i]!='\0')
    {
        while(Src[i]==' '||Src[i]==','||Src[i]=='.'||Src[i]=='\t')
        {
             i++;

        }
         while(Src[i]!='\0' && Src[i]!=',' && Src[i]!='.' && Src[i]!='\t' && Src[i]!=' ')
        {
            i++;
            wcnt++;
        }
        break;
    }
    return wcnt;
}
