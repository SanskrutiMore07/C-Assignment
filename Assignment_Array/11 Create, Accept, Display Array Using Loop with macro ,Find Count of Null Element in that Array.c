///11 Create, Accept, Display Array Using Loop with macro ,Find Count of Null Element in that Array.

#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
    int No=0,i=0,cnt=0;
    int arr[size];

    printf("\n Enter Numbers :");

    for( i =0;i<size;i++)
    {
        printf("\n Element At Position %d :",i+1);
        scanf("%d",&arr[i]);
    }

     printf("\n *************** Display Elements **********");

     for(i=0;i<size;i++)
     {
         printf("\n Element %d = %d",i+1,arr[i]);

     }

     for(i = 0;i<size;i++)

     {
          if(arr[i] == 0)
         {
             cnt++;
         }
     }


     printf("\n Count Of Odd Elements :%d", cnt);
     getch();
     return 0;
}
