///3.	Write a program to accept a number from the user and print that number of * on screen.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i =0, No =0;

    printf("\n Enter A Number To Print * : ");
    scanf("%d",&No);

    for(i =0;i<=No;i++)
    {
        printf(" * ");
    }
    getch();
    return 0;
}

