///20.	Write a program that accepts two numbers from the user and swaps their values.(Without using a third variable)

int main()
{
    int  No1,No2;

    printf("\n Enter Two Numbers :");
    scanf("%d%d",&No1,&No2);

    printf("\n Numbers Before Swap : %d & %d",No1,No2);

    No1 = No1 + No2;  //10+5 = 15
    No2 = No1 - No2;  //15 - 5 = 10
    No1 = No1 - No2;  //15 - 10 = 5


    printf("\n Numbers After Swap : %d & %d",No1,No2);

    getch();
    return 0;
}
