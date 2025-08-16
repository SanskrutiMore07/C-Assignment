///12 Create, Accept, Display Array Using Loop with macro ,Find Count of Odd And Even Element in that Array.

#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
int i =0 ,OddCnt =0 ,EvenCnt =0;
int arr[size];
printf("\n Enter Elements :");

for(i = 0; i<size; i++)
{
    printf("\n Element % : ",i+0);
    scanf("%d",&arr[i]);
}
printf("\n ******* Display all elements ************");

for(i = 0;i<size;i++)
{
    printf("\n Element %d is:%d ",i,arr[i]);
}

for(i=0;i<size;i++)
if(arr[i] %2 == 0)
{
    EvenCnt ++;
}
else
{
    OddCnt ++;
}
printf("\n Even Count Is :%d",EvenCnt);

printf("\n Odd Count Is :%d",OddCnt);

getch();
return 0;
}
