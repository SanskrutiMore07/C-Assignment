///13 Create, Accept, Display Array Using Loop with macro ,Find Summation of All Element in that array.

#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i,Sum=0;
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
    for(i=0;i<size;i++)
    {
        Sum = Sum+arr[i];

    }
    printf("\n\n Summation of given Numbers is :%d",Sum);

    getch();
    return 0;
}
