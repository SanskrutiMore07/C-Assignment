///06 Create, Accept, Display Array Using Loop Search Given Element in that Array & Return its Index If Found.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i =0,No =0,found = 0;
    int arr[5]={0};

    for(i=0;i<5;i++)
    {
        printf("\n Enter Array Element %d => ",i+0);
        scanf("%d",&arr[i]);
    }

    printf("\n***************************************");
    printf("\n ### Given array elements are ### ");

    for(i=0;i<5;i++)
    {
        printf("\n Element Of Array %d IS => %d",i,arr[i]);
    }
    printf("\n***************************************");

    getch();

    printf("\n Enter Element To Search : ");
    scanf("%d",&No);

    for(i=0;i<5;i++)
    {
        if(No==arr[i])
        {
            printf("Given Element %d Location Is :%d",No,i);
            found =1;
            break;
        }

    }
      if (!found)
    {
        printf("\n No Element Found With Value : %d", No);
    }


    getch();
    return 0;

}
