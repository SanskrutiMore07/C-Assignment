///14.	Write a program to accept a character from the user and check if it is an upper case letter or a lower case letter.

#include<stdio.h>
#include<conio.h>

int main()
{

    char ch ='\0';

    printf("\n Enter character : ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch<= 'Z')
    {
        printf("\n The character '%c' is Upper Case. ",ch);
    }
    else if(ch >= 'a' && ch<= 'z')
    {
       printf("\n The character %c is Lower Case. ",ch);
    }
    else{
        printf("\n The character %c is Not a letter.",ch);
    }

    getch();
    return 0;
}
