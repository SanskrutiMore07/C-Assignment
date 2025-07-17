///5.	Write a program which accept two numbers from user and display first number in second number of times.

#include<stdio.h>
#include<conio.h>
int main() {
    int Num, Times,i =0;

    printf("Enter a number: ");
    scanf("%d", &Num);

    printf("Enter how many times to display: ");
    scanf("%d", &Times);

    for (i = 0; i < Times; i++)
    {
        printf("%d\n", Num);
    }

    return 0;
}
