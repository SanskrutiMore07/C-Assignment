#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0, i= 0, j = 0;

    printf("\n Enter A Number 1 :");
    scanf("%d",&No1);

    printf("\n Enter A Number 2 :");
    scanf("%d",&No2);

    printf("\n*******************================*******************\n\n");
    for(i=1;i<=No1;i++)
    {
        for(j=1;j<=No2;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n*******************================*******************\n");

    getch();
    return 0;
}
