///Write a program which accept number from user and if display its Reverse Number. (with new variable for storing reverse)

#include<stdio.h>
#include<conio.h>

int main()
{
    int No =0,Temp = 0,Rev =0,Dig = 0;

    printf("\n Enter Any Number :");
    scanf("%d",&No);

    Temp = No;

    while(Temp>0)
    {
        Dig = Temp % 10;
        Rev = (Rev*10)+Dig;
        Temp = Temp / 10;
    }
    printf("\n Given Number %d of Revers Is :%d",No,Rev);

    getch();
    return 0;
}
