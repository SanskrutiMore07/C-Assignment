///9.	Write a program that accepts a month number (1 to 12) and prints the corresponding month name.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Day =0;

    printf("\n Enter Any Number To Print Corresponding Month Name: ");
    scanf("%d",&Day);

    switch(Day)
    {
    case 1:
        {
            printf("\n The month is January");
            break;
        }
        case 2:
        {
            printf("\n The month is February");
            break;
        }
        case 3:
        {
            printf("\n The month is March");
            break;
        }
        case 4:
        {
            printf("\n The month is April");
            break;
        }
        case 5:
        {
            printf("\n The month is May ");
            break;
        }
        case 6:
        {
            printf("\n The month is June");
            break;
        }
        case 7:
        {
            printf("\n The month is July");
            break;
        }
        case 8:
        {
            printf("\n The month is August");
            break;
        }
        case 9:
        {
            printf("\n The month is September");
            break;
        }
        case 10:
        {
            printf("\n The month is October");
            break;
        }
        case 11:
        {
            printf("\n The month is November");
            break;
        }
        case 12:
        {
            printf("\n The month is December");
            break;
        }
    }

    getch();
    return 0;
}
