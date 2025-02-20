#include<stdio.h>
#include<conio.h>

int main()
{
   int No1 = 0, No2 = 0;
   int i= 0, j = 0;

   printf("\n Enter A Number 1 :");
    scanf("%d",&No1);

    printf("\n Enter A Number 2 :");
    scanf("%d",&No2);

    printf("\n*******************================*******************\n\n");
    for(i=1;i<=No2;i++)
    {
        for(j=No1;j>=1;j--)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
    printf("\n*******************================*******************\n");

    getch();
    return 0;
}
