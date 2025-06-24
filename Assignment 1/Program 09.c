///09.Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14. (Area = PI * Radius * Radius)

#include<stdio.h>
#include<conio.h>

int main()
{

    int Rad;
    float PI = 3.14,Area;

    printf("\n Enter Radius To Calculate Area : ");
    scanf("%d",&Rad);

    Area = PI * Rad * Rad;

    printf("\n Area Of Given Radius Of Circle Is :%0.2f ",Area);

    getch();
    return 0;
}
