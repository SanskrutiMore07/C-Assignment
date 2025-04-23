////String Using Strcpy()function.
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char FName[10] ="Sayali";
    char LName[10]="More";

    printf("\n Name Of String Is :%s",FName);
    printf("\n Last Name Of String Is :%s",LName);

    getch();

    strcpy(FName ,"Sanskruti");
    printf("\n New Name String Is : %s.",FName);

    printf("\n Updated Name String Is :%s.",FName);

    getch();
    return 0;

}
