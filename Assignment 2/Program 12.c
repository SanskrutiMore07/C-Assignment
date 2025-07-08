///12.	Write a program to accept a character from the user and check whether that character is a vowel (a, e, i, o, u). Display the result.

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter Any Character : ");
    scanf("%c",&ch);

    if(ch == 'A' || ch == 'E' || ch == 'I'|| ch == 'O' ||ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o')
    {
        printf("\n The character %c is a vowel.",ch);
    }
    else
    {
        printf("\n The character %c is Not vowel. ",ch);
    }
    getch();
    return 0;

}
