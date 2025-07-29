///11.	Write Program to find maximum no. from 7 inputted numbers.

#include <stdio.h>
#include<conio.h>


int main() {
    int Numbers[7];
    int i, Max;


    printf("Enter 7 numbers:\n");
    for(i = 0; i < 7; i++)
        {
        printf("Number %d: ", i + 1);
        scanf("%d", &Numbers[i]);
        }


    Max = Numbers[0];

    for(i = 1; i < 7; i++)
        {
          if(Numbers[i] > Max)
          {
            Max = Numbers[i];
          }
       }


    printf("The maximum number is: %d\n", Max);
    getch();
    return 0;
}
