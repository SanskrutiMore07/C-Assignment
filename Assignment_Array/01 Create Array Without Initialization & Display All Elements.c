#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0 ;
    int arr[5];

    printf("\n Enter Number :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Given Numbers Are :");

    for(i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    getch();
    return 0;
}
