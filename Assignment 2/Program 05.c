///5.	Write a program to accept a number from the user and check whether it is divisible by 7, then display the result.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No  = 0;

    printf("\n Enter Any Number :");
    scanf("%d",&No);

    if(No%7 == 0)
    {
        printf("\n %d Is Divisible By 7",No);
    }
    else{
         printf("\n %d Is Not Divisible By 7",No);
    }
    getch();
    return 0;
}
