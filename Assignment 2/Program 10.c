///10.	Write a program to accept a number from the user and check if it is less than 10.  If it is less than 10, print "Hello"; otherwise, print "World"

#include<stdio.h>
#include<conio.h>

int main()
{
    int No =0;

    printf("\n Enter Any Number: ");
    scanf("%d",&No);

    if(No<10)
    {
        printf("\n Hello");
    }
    else{
        printf("\n World");
    }
    getch();
    return 0;
}
