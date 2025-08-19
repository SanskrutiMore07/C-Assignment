///5.Write a program which accept number from user and return the count of odd digits

#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,dig =0,temp =0,Ocnt =0;

    printf("\n Enter Number : ");
    scanf("%d",&No);

    temp = No;

    while(temp > 0)
 {
     dig = temp%10;
     if(dig%2 == 0)
     {
         Ocnt++;
     }
     temp = temp/10;
 }
    printf("Odd Count Of Given Number %d Is :%d ",No,Ocnt);

    getch();
    return 0;

}
