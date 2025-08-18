///3.	Write a program which accept number from user and return the count of digits.

#include<stdio.h>
#include<conio.h>

int main()
{

    int count =0,Temp =0,No=0;

    printf("\n Enter Any Number :\n");
    scanf("%d",&No);
    Temp =No;

    while(Temp>0)
    {
        Temp = Temp /10;
        count++;
    }

    printf("\n Count Of Given Number %d Id :%d",No,count);

    getch();
    return 0;

}
