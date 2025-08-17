 ///16 Create, Accept, Display Array Using Loop - Find Maximum & 2nd Maximum Element in that array.

#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i;
    int max=0 ,max2=0;
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
        if(arr[i]> max)
        {
            max2 = max;
            max = arr[i];
        }
        //max2 = max > arr[i];
        /*else if(arr[i]>max2 && arr[i]<max)
        {
            arr[i] = max2;
        }*/
    }
    printf("\n Max Number Of Elements : %d",max);
     printf("\n Second Max Number Of Elements : %d",max2);

     getch();
     return 0;
}

