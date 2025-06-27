///16.	Write a program that accepts a number from the user and calculates the cube of that number. (Cube = Number * Number * Number)

#include<stdio.h>
#include<conio.h>

int main()
{
    int No , Cube;

    printf("\n  Enter No to calculates the Cube of that number. : ");
    scanf("%d",&No);


    Cube = No * No * No;

    printf("\n Cube of that number is : %d",Cube);

    getch();
    return 0;
}
