///16.	Write a program which accept 4 digits number from the user and if it is 4 digits number display its Reverse Number otherwise iterate till user enters 4 digits number.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No =0 ,Dig =0, Rev =0 ,Temp =0,cnt=0;

 up:
     Rev= 0;
     cnt =0;

    printf("\n Enter Number : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp >0)
    {
        Dig = Temp %10;
        Rev = (Rev*10)+Dig;
        cnt++;
        Temp = Temp/10;
    }
    if(cnt == 4)
    {
        printf("\n Rev Of Digit Is : %d",Rev);
    }
     else
     {
        printf("\n Invalid Input! Please Enter 4 Digit Number.");
        goto up;
     }

    getch();
    return 0;
}
