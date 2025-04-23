////String Using strcat()function.
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char FName[20] ="";
    char LName[30]="";

    printf("\n Name Of String Is :");
    gets(FName);
    printf("\n Last Name Of String Is :");
    gets(LName);
    getch();

    strcat(FName ,LName);
    printf("\n Full Name Generated Is : %s.",FName);

    getch();
    return 0;

}
