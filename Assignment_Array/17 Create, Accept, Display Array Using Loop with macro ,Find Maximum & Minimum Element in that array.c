///16 Create, Accept, Display Array Using Loop with macro ,Find Maximum & Minimum Element in that array.
#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i,min;
    int max =0;
    int arr[size];

    printf("\n Enter Numbers =>");

    for(i=0;i<size;i++)
    {
        printf("\n Element %d: ",i+0);
        scanf("%d",&arr[i]);
    }

    printf("***************** Display Elements ***************");

    for(i=0;i<size;i++)
    {
        printf("\n Element %d : %d",i+0,arr[i]);
    }

    for(i=0;i<size;i++)
    {
        if(arr[i]>= max)
        {
            max = arr[i];
        }
        if(arr[i]<= min)
        {
            min = arr[i];
        }
    }
    printf("\n Max Number Of Elements : %d",max);
     printf("\n Min Number Of Elements : %d",min);

     getch();
     return 0;
}
