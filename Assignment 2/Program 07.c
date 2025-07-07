///7.Write a program that accepts a number from the user and checks if it is even or odd using the ternary operator.
#include<stdio.h>
#include<conio.h>

int main()
{
    int No =0;

    printf("\n Enter Any Number :");
    scanf("%d",&No);

    (No % 2 == 0)?(printf("%d is Even Number!!!!",No)):(printf("% is Odd Number!!!!",No));

    getch();
    return 0;
}
