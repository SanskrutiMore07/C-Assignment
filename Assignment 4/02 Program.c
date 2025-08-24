#include<stdio.h>
#include<conio.h>

int main()
{
    int No1,No2,i,j=0;

    printf("\n Enter 2 Numbers : ");
    scanf("%d%d",&No1,&No2);

    for(i=1;i<=No1;i++)
    {
        for(j=1;j<=No2;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
