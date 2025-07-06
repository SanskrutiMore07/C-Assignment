///4.	Write a program to find the maximum number among three given numbers provided by the user and display the result.

#include<stdio.h>
#include<conio.h>
int main()
{
    int No1,No2,No3;

    printf("\n Enter A Number 1:");
    scanf("%d",&No1);

    printf("\n Enter A Number 2:");
    scanf("%d",&No2);

    printf("\n Enter A Number 3:");
    scanf("%d",&No3);

    if(No1>No2 && No1>No3)
    {
        printf("\n %d iS Maximum Number.",No1);
    }
    if(No2>No1 && No2>No3)
    {
        printf("\n %d iS Maximum Number.",No2);
    }
    if(No3>No1 && No3>No2)
    {
         printf("\n %d iS Maximum Number.",No3);
    }
    getch();
    return 0;
}
