#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int No,i,cnt=0;
    int arr[size];

    printf("\n Enter Elements : \n ",size);

    for(i = 0 ; i<size;i++)
    {
        printf("\n Element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n Array Elements Are :");

    for(i =0;i<size;i++)
    {
        printf("%d",arr[i]);
    }

    printf("\n Enter A Number To Print Count Of it:");
    scanf("%d",&No);

    for(i=0;i<size;i++)
    {
        if(arr[i]==No)
            cnt++;
    }
    printf("\n Count Of %d is : %d",No,cnt);

    getch();
    return 0;


}
