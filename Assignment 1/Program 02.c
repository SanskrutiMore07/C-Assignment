///2.Create a program to add two numbers provided by the user and display the result.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No1,No2,Sum;

    printf("\n Enter Two Numbers : ");
    scanf("%d%d",&No1,&No2);

    Sum = No1+No2;

    printf("\n Result Of Given Numbers : %d",Sum);

    getch();
    return 0;
}
