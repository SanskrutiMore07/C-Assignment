///13.Write a program which accept distance in kilometer and convert it into meter.(1 kilometer = 1000 Meter)

#include<conio.h>
#include<conio.h>

int main()
{
    float Km ,Meter;

    printf("\n Enter Value In Km To Calculate Distance In Meter: ");
    scanf("%f",&Km);


    Meter = Km * 1000;

    printf("\n  Calculate Distance In Meter: %0.2f ",Meter);

    getch();
    return 0;
}



