///18.	Write a program to accept a number from the user and calculate the square root of that number, then display the result. (SquareRoot = sqrt(No))

#include<stdio.h>
#include<conio.h>

int main()
{
    float No, SqureRoot;
    printf("\n Enter Number To Calculate Square Root Of That Number :");
    scanf("%f",&No);

    SqureRoot = sqrt(No);
    printf("\n Square Root of Given Number Is : %0.2f ",SqureRoot);
    getch();
    return 0;
}
