///9.	Accept character from user. If it is capital then display all the characters from the input characters till Z and if input character is small then print all the characters in reverse order till a. In other cases, return directly.

#include<stdio.h>
#include<conio.h>
int main()
{
    char ch,l;

    printf("\n Enter A character :");
    scanf("%c",&ch);

    if(ch>='A'&& ch<='Z')
    {
        printf("Output:");

        for(l = ch;l <= 'Z';l++)
        {
               printf("%c",l);
        }
        printf("\n");

    }
    else if(ch>='a' && ch<='z')
    {
        printf("Output:");
        for(l=ch;l>='a';l--)
        {
            printf("%c",l);
        }
        printf("\n");
    }
    else{
        printf("\n Invalid Character!!!!");
    }
    getch();
    return 0;
}
