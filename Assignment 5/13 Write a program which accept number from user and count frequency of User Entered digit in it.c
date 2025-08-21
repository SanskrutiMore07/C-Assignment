///13 Write a program which accept number from user and count frequency of User Entered digit in it.

#include<stdio.h>
#include<conio.h>

int main()
{

    int No= 0,Temp =0 ,Dig =0,Cnt =0,NDig;

    printf("\n Enter Any Number : ");
    scanf("%d",&No);

    printf("\n Given Number is : %d",No);

    getch();

    printf("\n Enter A Number To Find Count Of Given Number : ");
    scanf("%d",&NDig);

    Temp = No;

    while(Temp>0)
    {
        Dig = Temp %10;
        if(Dig == NDig)
        {
            Cnt++;
        }
        Temp = Temp /10;

    }
    printf("\n The digit %d appears %d times.",NDig ,Cnt);

    getch();
    return 0;
}
