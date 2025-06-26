///14.	Write a program which accept temperature in Fahrenheit and convert it into Celsius.  (1 Celsius = (Fahrenheit -32) * (5/9))

#include<conio.h>
#include<conio.h>

int main()
{
    float Fahrenheit,Celsius;

    printf("\n Enter Temperature in Fahrenheit and convert it into Celsius: ");
    scanf("%f",&Fahrenheit);

    Celsius = (Fahrenheit -32)*5/9;


    printf("\n  Converted Temperature into Celsius Is : %0.2f ",Celsius);

    getch();
    return 0;
}
