///6 Write a program which accept number from user and return the count of Even, Odd, Zeros digits.(Use Loop Once)

#include<stdio.h>
#include<conio.h>

int main()
{
    int No =0, Ecnt=0,Ocnt=0,Dig=0,Temp=0,Zcnt=0;

    printf("\n Enter Number : ");
    scanf("%d",&No);

    Temp = No;

    while (Temp > 0)
    {
      Dig = Temp % 10;
      if(Dig%2 == 0)
      {
          Ecnt ++;
      }
      if(Dig%2 != 0)
      {
          Ocnt ++;
      }
      if(Dig == 0)
      {
          Zcnt ++;
      }
      Temp = Temp /10;
    }
    printf("\n Even Count Of Given Number Is : %d",Ecnt);
     printf("\n Odd Count Of Given Number Is : %d",Ocnt);
      printf("\n Zeron Count Of Given Number Is : %d",Zcnt);

      getch();
      return 0;
}
