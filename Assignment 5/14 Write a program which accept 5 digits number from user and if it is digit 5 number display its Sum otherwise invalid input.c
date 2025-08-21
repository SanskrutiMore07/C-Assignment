///14 Write a program which accept 5 digits number from user and if it is digit 5 number display its Sum otherwise invalid input.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No =0 ,Dig =0, Sum =0 ,Temp =0,cnt=0;

    printf("\n Enter Number : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp >0)
    {
        Dig = Temp %10;
        Sum = Sum +Dig;
        cnt++;
        Temp = Temp/10;
    }
    if(cnt == 5)
    {
        printf("\n Sum Of Digit Is : %d",Sum);
    }
    else{
        printf("\n Invalid Input");
    }

    getch();
    return 0;
}

