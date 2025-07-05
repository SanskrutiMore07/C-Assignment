///3.Write a program to find the maximum number between two given numbers.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No1,No2;

    printf("\n Enter Number 1 :");
    scanf("%d",&No1);

    printf("\n Enter Number 2 :");
    scanf("%d",&No2);

    if(No1>No2)
    {
        printf("\n Number 1 Is Maximum !!!");
    }

    else if(No1<No2)
    {
        printf("\n Number 2 Is Maximum !!!");
    }

    getch();
    return 0;
}
