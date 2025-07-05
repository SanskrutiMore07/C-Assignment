///Write a program to Find Number is even or odd

#include<stdio.h>
#include<conio.h>

int main()
{

    int No =0;

    printf("\n Enter any number : ");
    scanf("%d",&No);

    if(No % 2 == 0)
    {
        printf("\n Given Number Is Even");
    }
    else{
        printf("\n Given Number Is Odd");
    }
    getch();
    return 0;

}
