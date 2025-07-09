///15.	Write a program to accept a character from the user and determine if it is an upper case letter, lower case letter, digit, or special symbol.

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("Enter Any Character :");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z' )
    {
        printf("%c Is Upper Case Character!!!",ch);
    }
    else if(ch >= 'a' && ch <= 'z' )
    {
        printf("%c Is Lower Case Character!!!",ch);
    }
    else if(ch >= '0' && ch <= '9' )
    {
        printf("%c Is Digit!!!",ch);
    }
    else
    {
         printf("%c Is Special Symbol!!!",ch);
    }
    getch();
    return 0;
}
