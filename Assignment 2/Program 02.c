///Write a program to Find Number is Positive or Negative

#include<stdio.h>
#include<conio.h>

int main()
{

    int No =0;

    printf("\n Enter any number : ");
    scanf("%d",&No);

    if(No >= 0)
    {
        printf("\n Given Number Is Positive");
    }
    else{
        printf("\n Given Number Is Negative");
    }
    getch();
    return 0;

}
