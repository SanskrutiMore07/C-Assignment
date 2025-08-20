///12.	Write a program which accept number from user and check whether it contains 2 in it or not.

#include<stdio.h>
#include<conio.h>


int main()
{
    int No = 0,Temp =0, Dig = 0;

    printf("\n Enter Any Number : ");
    scanf("%d",&No);

    Temp = No;
   while (Temp > 0)
   {
       Dig = Temp %10;
       if(Dig == 2)
       {
           printf("\n It Contains Two ");
           getch();
           return 0;
       }

       Temp = Temp /10;
   }

      printf("\n There is no Two ");
    getch();
    return 0;
}
