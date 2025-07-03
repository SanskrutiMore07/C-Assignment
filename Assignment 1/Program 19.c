///19.	Write a program that accepts two numbers from the user and swaps their values.

#include<stdio.h>
#include<conio.h>

int main()
{
    int  No1,No2,Temp;

    printf("\n Enter Two Numbers :");
    scanf("%d%d",&No1,&No2);

    printf("\n Numbers Before Swap : %d & %d",No1,No2);


    Temp = No1;
    No1 = No2;
    No2 = Temp;

    printf("\n Numbers After Swap : %d & %d",No1,No2);

    getch();
    return 0;
}
