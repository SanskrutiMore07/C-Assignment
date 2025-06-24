///11.	Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height)

#include<stdio.h>
#include<conio.h>

int main()
{
    float Width ,Height ,Area ;

    printf("\n Enter Width Of Rectangle : ");
    scanf("%f",&Width);

    printf("\n Enter Height Of Rectangle : ");
    scanf("%f",&Height);

    Area = Width * Height;

    printf("\n Area Of Rectangle is : %0.2f ",Area);

    getch();
    return 0;
}
