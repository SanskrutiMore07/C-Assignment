#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,No=0;

    printf("\n Enter Any Number :");
    scanf("%d",&No);

    for(i=1;i<=No;i++)
    {
        for(j=5;j>=1;j--)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
    getch();
    return 0;
}
