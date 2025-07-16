///4.	Write a program to calculate and print the factorial of a given number.


#include<stdio.h>
#include<conio.h>

int main()
{
    int No =0,fact =1,i =0;

    printf("\n Enter any number :");
    scanf("%d",&No);

    for(i = 1;i<=No;i++)
    {
        fact = fact*i;
    }

        printf("\n Factorial Of Given Number %d Is n: %d",No,fact);
    getch();
    return 0;
}
