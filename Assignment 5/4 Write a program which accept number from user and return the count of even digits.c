///4.Write a program which accept number from user and return the count of even digits

#include<stdio.h>
#include<conio.h>

int main()
{
 int No =0 , temp =0 ,dig =0,Ecnt =0;

 printf("\n Enter Number : ");
 scanf("%d",&No);

 temp = No;
 while(temp > 0)
 {
     dig = temp%10;
     if(dig%2 == 0)
     {
         Ecnt++;
     }
     temp = temp/10;
 }
     printf("\n Count Of Even Numbers In Given Number %d : %d",No,Ecnt);
 getch();
 return 0;
}
