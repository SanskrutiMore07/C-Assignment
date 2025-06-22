///5.Write Program to print size of int, float, double, etc.

#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Size Of Int :%d bytes \n",sizeof(int));
    printf("Size Of Float :%d bytes \n",sizeof(float));
    printf("Size Of Double :%d bytes \n", sizeof(double));
    printf("Size Of Char :%d bytes \n",sizeof(char));

    getch();
    return 0;

}
