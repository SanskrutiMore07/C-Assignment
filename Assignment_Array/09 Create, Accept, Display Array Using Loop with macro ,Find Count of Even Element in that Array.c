///09 Create, Accept, Display Array Using Loop with macro ,Find Count of EVEN Element in that Array.

#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
    int No,i,cnt=0;
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
         printf("\n Element %d = %d",i+0,arr[i]);

     }

     for(i = 0;i<size;i++)
     {
         if(i%2 == 0)
         {
             cnt++;
         }
     }
     printf("\n Count Of Even Elements :%d",cnt);
     getch();
     return 0;
}
