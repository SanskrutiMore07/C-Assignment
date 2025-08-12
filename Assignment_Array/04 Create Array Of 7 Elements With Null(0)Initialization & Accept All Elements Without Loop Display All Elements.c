/// 04 Create Array Of 7 Elements With Null(0)Initialization & Accept All Elements Without Loop Display All Elements

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[7];

    printf("\n ********************************");

    printf("\n Enter 7 Elements  => ");
    scanf("%d",&arr[0]);
    scanf("%d",&arr[1]);
    scanf("%d",&arr[2]);
    scanf("%d",&arr[3]);
    scanf("%d",&arr[4]);
    scanf("%d",&arr[5]);
    scanf("%d",&arr[6]);

    printf("\n ********************************");
    getch();

    printf("\n Elements of Array Are !!!!");
    printf("\n Element 1 Is => %d",arr[0]);
    printf("\n Element 2 Is => %d",arr[1]);
    printf("\n Element 3 Is => %d",arr[2]);
    printf("\n Element 4 Is => %d",arr[3]);
    printf("\n Element 5 Is => %d",arr[4]);
    printf("\n Element 6 Is => %d",arr[5]);
    printf("\n Element 7 Is => %d",arr[6]);

    printf("\n ********************************");

    getch();
    return 0;

}
