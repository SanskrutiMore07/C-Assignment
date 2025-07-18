/// 08 Write a program to print the letters in user specified range using a loop. (forward or reverse range, variable range)
#include <stdio.h>
#include<conio.h>
int main() {
    char start, end,ch;

    printf("Enter the start character: ");
    scanf(" %c", &start);
    printf("Enter the end character: ");
    scanf(" %c", &end);

    printf("Output: ");


    if (start <= end)
    {
        for (ch = start; ch <= end; ch++)
        {
            printf("%c ", ch);
        }
    }
    else
    {
        for (ch = start; ch >= end; ch--)
         {
            printf("%c ", ch);
         }
    }

    printf("\n");
    return 0;
}
