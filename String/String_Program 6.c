#include<stdio.h>
#include<conio.h>

int main()
{

    char cSrc[20]= "Rahul Patil ";
    int i = 0;

    puts(cSrc);
    //gets(cSrc);

    while(cSrc[i]!= '\0')
    {
        i++;
    }

    printf("\n Length Of Given String Is :%d",i);
    getch();
    return 0;
}

