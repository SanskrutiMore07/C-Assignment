///1.	Write a program that accepts a number from the user, sums its digits, and displays them in the following format.

#include<stdio.h>
#include<conio.h>

int main()
{
    int N1,N2,N3,Sum =0;

    printf("\n Enter 3 Numbers :\n ");
    scanf("%d%d%d",&N1,&N2,&N3);

    Sum = N1+N2+N3;

    printf("Sum Of %d+%d+%d Is : %d",N1,N2,N3,Sum);

    getch();
    return 0;

}
