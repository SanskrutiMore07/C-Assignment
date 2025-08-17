///14 Create, Accept, Display Array Using Loop with macro ,Find Maximum Element in that array.


#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i,Max=0;
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

    //Max Number
    for(i=0;i<size;i++)
    {
       if(arr[i]>= Max)
       {
            Max = arr[i];
       }

    }
    printf("\n\n Max of given Numbers is :%d",Max);

    getch();
    return 0;
}
