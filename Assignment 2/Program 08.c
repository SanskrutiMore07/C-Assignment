///8.	Write a program that accepts a day number (1 to 7) and prints the corresponding day of the week

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;
    up:
    printf("\n Enter Any Number From 1 To 7 : ");
    scanf("%d",&No);

    if(No == 1)
    {
        printf("\n Monday");
    }
     else if(No == 2)
    {
        printf("\n Tuesday");
    }
      else if(No == 3)
    {
        printf("\n Wednesday");
    }
      else if(No == 4)
    {
        printf("\n Thursday");
    }
      else if(No == 5)
    {
        printf("\n Friday");
    }
      else if(No == 6)
    {
        printf("\n Saturday");
    }
      else if(No == 7)
    {
        printf("\n Sunday");
    }
    else{
        printf("\n Invalid Number !!!! ");
        goto up;
    }
    printf("\n Thank You!!!!!");
    getch();
    return 0;
}

