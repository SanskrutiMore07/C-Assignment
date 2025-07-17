///7.	Write a program to print the letters from w to e using a loop. (reverse, fixed range)

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch ='\0';

    printf("\n letters from w to e :");

    for(ch ='w';ch>='e';ch--)
    {
        printf("\n%c",ch);
    }
    getch();
    return 0;
}
