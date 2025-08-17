///15 Create, Accept, Display Array Using Loop with macro ,Find Minimum Element in that array.


#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i,Min;
    int arr[size];

    printf("\n Enter Element =>");
    for(i=0;i<size;i++)
    {
        printf("\n Element %d :",i+0);
        scanf("%d",&arr[i]);
    }

    printf("\n ******* Display all elements ************");

    for(i=0;i<size;i++)
    {
        printf("\n Element %d Is :%d",i+0,arr[i]);

    }

    //Min Number
    for(i=0;i<size;i++)
    {
       if(arr[i] <= Min)
       {
            Min = arr[i];
       }

    }
    printf("\n\n Min of given Numbers is :%d",Min);

    getch();
    return 0;
}
