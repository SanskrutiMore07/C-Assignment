///10.	Write a program which accept number from user and Count Zeros in it.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No= 0,Zcnt=0,Temp =0,Dig =0;

    printf("\n Enter Any number To Find Zeros : ");
    scanf("%d",&No);

    Temp =No;

    while(Temp > 0)
    {
        Dig = Temp %10;

        if(Dig == 0)
        {
          Zcnt++;
        }
        Temp  = Temp /10;
    }
      printf("\n Zero Digit in %d is : %d", No, Zcnt);
    getch();
    return 0;
}
