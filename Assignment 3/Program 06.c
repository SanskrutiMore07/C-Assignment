///6.	Write a program to print the letters from H to N using a loop. (forward, fixed range)

#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 ;
    char ch ='\0';

    printf("\n letters from H to N: ");

    for(ch = 'H';ch<='N';ch++)
    {
        printf("\n\n %c",ch);
    }
    getch();
    return 0;
}
