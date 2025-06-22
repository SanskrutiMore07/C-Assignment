 ///03 Write a program to multiply two numbers provided by the user and display the result.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No1,No2,Mult;

    printf("\n Enter Two Numbers : ");
    scanf("%d%d",&No1,&No2);

    Mult = No1*No2;

    printf("\n Result Of Given Numbers : %d",Mult);

    getch();
    return 0;
}
