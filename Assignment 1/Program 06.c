
///6.	Write Program to print ASCII table (0-127)

#include <stdio.h>
#include <conio.h>

void printASCII()
{
    int i = 0;
    for(i = 0 ; i<=127;i++)
    {

        printf("\n ASCII Value Of %d = %c ",i,i);
    }
}

int main()
{
    printASCII();
    getch();
    return 0;

}
