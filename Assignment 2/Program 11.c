
///11 Write a program to check whether a given year is a leap year.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Year = 0;

    printf("\n Enter A Year To Check it is Leap Year Or Not :");
    scanf("%d",&Year);

    if(Year % 400 == 0 || Year % 4 == 0)
    {
        printf("\n %d It Is Leap Year. !!!",Year);
    }
    else{
        printf("\n %d It Is Not Leap Year. !!! ",Year);
    }

    getch();
    return 0;
}
