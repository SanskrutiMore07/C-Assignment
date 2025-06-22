 ///04.Write a program to accept marks of 3 subjects and calculate and display total and percentage.

#include<stdio.h>
#include<conio.h>

int main()
{
    int M1,M2,M3,Total;
    float percentage;

    printf("\n Enter Marks Of Science Subject: ");
    scanf("%d",&M1);

    printf("\n Enter Marks Of Computer Subject: ");
    scanf("%d",&M2);

    printf("\n Enter Marks Of Maths Subject: ");
    scanf("%d",&M3);

    Total = M1+M2+M3;

    percentage = (Total *100)/300;
    printf("\n********************************");
    printf("\n Student Exam Details \n");
    printf("\n Marks Of Science Subject: %d",M1);
    printf("\n Marks Of Computer Subject: %d",M2);
    printf("\n Marks Of Maths Subject: %d",M3);
    printf("\n Total :%d",Total);
    printf("\n Percentage :%0.2f",percentage);
    printf("\n********************************");

    getch();
    return 0;
}
