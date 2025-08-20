///11.	Write a program which accept number from user and count frequency of 2 in it.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Temp = 0, No = 0, Dig = 0 ,cnt=0;

    printf("\n Enter Any Number : ");
    scanf("%d",&No);

    Temp = No ;

    while(Temp > 0)
    {
        Dig = Temp %10;
        if(Dig == 2)
        {
            cnt++;
        }
        Temp = Temp/10;
    }
    printf("\n Count Of 2 Is : %d",cnt);

    getch();
    return 0;
}
