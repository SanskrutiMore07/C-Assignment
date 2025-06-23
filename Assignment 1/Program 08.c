 ///8.Write a program to find the character for an ASCII value provided by the user and display the result.

#include<stdio.h>
#include<conio.h>


void ASCIIValue()
{
    int No;
    printf("\n Enter Any Number To Convert Into ASCII: ");
    scanf("%d",&No);

    printf("\n Character for an ASCII value %d Is : %c",No,No);
}
int main()
{
    ASCIIValue();
    getch();
    return 0;
}
