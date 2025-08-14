///07 search Given Element in that Array & Return its Location If Found.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,No =0 ;
    int arr[7] = {15,25,68,99,35,20,50};

    printf("\n ****************************************\n");
    printf("\n Given Array Elements Are : ");

    for(i=0;i<7;i++)
    {
        printf("\n Element %d id => %d ",0+i,arr[i]);
    }
    printf("\n ****************************************\n");

    printf("\n Enter Element To Search : ");
    scanf("%d",&No);

    for(i=0;i<7;i++)
    {
        if(No==arr[i])
        {
            printf("Given Element %d Location Is :%d",No,i);
        }
    }
    getch();
    return 0;
}
