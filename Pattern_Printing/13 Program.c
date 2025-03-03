#include<stdio.h>
#include<conio.h>

int main()
{
    int i= 0, j = 0 ,x =0;
    printf("\n*******************================*******************\n\n");
    for(i=1,x =1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%-3d ",x*2);
             x++;
        }
        printf("\n");

    }
    printf("\n*******************================*******************\n");

    getch();
    return 0;
}
