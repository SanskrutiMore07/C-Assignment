#include<stdio.h>
#include<conio.h>

int main()
{

    char cSrc[20]={'\0'};
    int i = 0;

    printf("\n Enter A String : ");
    gets(cSrc);

    while(i<=20)
    {
        if(cSrc[i]=='\0')
        {
            break;
        }
        i++;
    }

    printf("\n Length Of Given String Is :%d",i);
    getch();
    return 0;
}
