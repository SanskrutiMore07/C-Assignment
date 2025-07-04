///21.	Write a program that accepts three numbers from the user and swaps their values such that the value of the first number goes to the second, the second goes to the third, and the third goes to the first.

int main()
{
    int  No1,No2,No3,temp;

    printf("\n Enter Three Numbers :");
    scanf("%d%d%d",&No1,&No2,&No3);

    printf("\n Numbers Before Swap :%d & %d & %d",No1,No2,No3);

    temp = No2;
    No2 = No1;
    No1 = No3;
    No3 = temp;


    printf("\n Numbers After Swap : No1:%d , No2:%d , No3:%d",No1,No2,No3);

    getch();
    return 0;
}
