///10.	Write a program to calculate the sum of 10 numbers inputted by the user.

#include<stdio.h>
#include<conio.h.>

int main()
{
    int No =0,sum =0 ,i;
    printf("\n Enter Numbers !!!! ");
    for(i=0;i<=5;i++)
    {
        printf("\n Enter Number %d:",i);
         scanf("%d",&No);
         sum = sum+No;
    }
     printf("\n Total=%d\n",sum);
getch();
return 0;

}
