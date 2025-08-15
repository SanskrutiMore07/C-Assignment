///08 Create, Accept, Display Array Using Loop with macro ,Find Count of Given Element in that Array.

#include<stdio.h>
#include<conio.h>
#define size 5


int main()
{
    int i,No,cnt=0;
    int arr[size];

    printf("\n Enter Numbers");
    for(i=0;i<size;i++)
    {
        printf("\n Element %d => ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("***************** Display All Elements **************");

    for(i=0;i<size;i++)
    {
        printf("\n Element At Position %d Is => %d",i+0,arr[i]);
    }

    getch();

    printf("\n Enter a Element To Find Count : ");
    scanf("%d",&No);

    for(i=0;i<size;i++)
    {
         if(arr[i]== No)
         {
             cnt++;
         }
    }
         printf(" \nCount Of Elements %d In Given Array => %d",No,cnt);
    getch();
    return 0;
}
