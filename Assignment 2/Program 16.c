///16.	Write a program to accept a character from user and check whether it is alphabet or not  (A-Z , a-z).

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("Enter Any Character :");
    scanf("%c",&ch);

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("\n True");
    }
    else
    {
        printf("\n False");
    }

    getch();
    return 0;

}
