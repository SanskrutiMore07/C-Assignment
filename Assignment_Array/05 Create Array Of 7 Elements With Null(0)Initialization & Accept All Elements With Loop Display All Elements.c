/// 05 Create Array Of 7 Elements With Null(0)Initialization & Accept All Elements With Loop Display All Elements.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0;
    int arr[7] ={0};

    for(i=0;i<7;i++)
    {
    printf("Enter Element : ");
    scanf("%d",&arr[i]);
    }
    getch();
    printf("\n*******************************\n");
    for(i=0;i<7;i++)
    {
    printf(" Array Element %d  is : %d \n\n",i+0,arr[i]);
    }
     printf("\n*******************************\n");
    getch();
    return 0;
}
