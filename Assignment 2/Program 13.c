///13.	Write a program to accept a character from the user and determine if it is a vowel (a, e, i, o,u), a consonant, or other. Display the result.
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter Any Character : ");
    scanf("%c",&ch);

    if(ch == 'A' || ch == 'E' || ch == 'I'|| ch == 'O'|| ch =='U' ||ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch=='u')
    {
        printf("\n The character %c is a vowel.",ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("\n The character %c is consonant",ch);
    }
    else
    {
     printf("\n The character %c is Other.",ch);
    }
    getch();
    return 0;

}
