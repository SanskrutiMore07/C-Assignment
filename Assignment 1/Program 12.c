///12.	Write a program that accepts the side length of a square from the user and calculates its area. (Area of Square = Side * Side)

#include<stdio.h>
#include<conio.h>

int main()
{
    float Length ,Area;

    printf("\n Enter Length Of Square : ");
    scanf("%f",&Length);


    Area = Length * Length;

    printf("\n Area Of Square is : %0.2f ",Area);

    getch();
    return 0;
}
