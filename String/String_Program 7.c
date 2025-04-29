#include<stdio.h>
#include<conio.h>

int main()
{

    char cSrc[40]={'\0'};
    int Len = 0;

    printf("\n Enter A String : ");
    gets(cSrc);

    for(Len = 0;cSrc[Len]!= '\0';Len++);

    printf("\n Length Of Given String Is :%d",Len);
    getch();
    return 0;
}

