#include<stdio.h>
#include<conio.h>

int main()
{
    int RC = 0, i = 0, j = 0;

    printf("\n Enter No. Of Rows And Column : ");
    scanf("%d",&RC);

    for(i=1; i<=RC; i++)
    {
       for(j=1; j<=RC; j++)
       {
           if((i==1 || i==RC || j==1 || j==RC) && !(i==j || i+j==RC+1))
           {
               printf(" $ ");
           }
           else
           {
               printf("   ");
           }
       }
       printf("\n");
    }
    getch();
    return 0;
}
