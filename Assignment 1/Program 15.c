///15.	Write a program that accepts a number from the user and calculates the square of that number. (Square = Number * Number)

#include<stdio.h>
#include<conio.h>

int main()
{
    int No , Squre;

    printf("\n  Enter No to calculates the square of that number. : ");
    scanf("%d",&No);


    Squre = No * No;

    printf("\n Square of that number is : %d",Squre);

    getch();
    return 0;
}
