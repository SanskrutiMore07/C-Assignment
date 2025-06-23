/// 7.	Write Program to find out ASCII value of given character.

#include<stdio.h>
#include<conio.h>


void ASCIIChar()
{
    char ch;
    printf("\n Enter Any Character : ");
    scanf("%c",&ch);
    printf("\n ASCII value of given character %c Is = %d",ch,ch);
}
int main()
{
    ASCIIChar();
    getch();
    return 0;
}
