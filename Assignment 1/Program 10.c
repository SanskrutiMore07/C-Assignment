///10.Write a program which accept radius of circle from user and calculate its Circumference. Consider value of PI as 3.14. (Circumference =  2 * PI * Radius)

#include<stdio.h>
#include<conio.h>

float Pi = 3.14;

int main()
{
    float Rad , Circumference ;

    printf("\n Enter Radius Of Circle To Calculate Circumference : ");
    scanf("%f",&Rad);

    Circumference  = 2 * Pi * Rad ;

    printf("\n Circumference  Of Circle Is : %0.2f ",Circumference );
    getch();
    return 0;
}
