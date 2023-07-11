
//TO Check whether number is divisible by 5 and 11 or not .

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n\n\t*****************************************************************");

    printf("\n\n\t\tEnter Number : ");
    scanf("%d",&No);

    if(No == 0)
    {
        printf("\n\t\tGiven Number %d is Neutral.",No);
    }
    else if((No % 5 == 0) && (No % 11 == 0))
    {
        printf("\n\t\tGiven Number %d is divisible by both 5 and 11.",No);
    }
    else if(No % 5 == 0)
    {
        printf("\n\t\tGiven Number %d is divisible by 5.",No);
    }
    else if(No % 11 == 0)
    {
        printf("\n\t\tGiven Number %d is divisible by 11.",No);
    }
    else
    {
        printf("\n\t\tGiven Number %d is not divisible by both 5 and 11.",No);
    }

    printf("\n\n\t\tThanks!!!");

     printf("\n\n\t*****************************************************************");

    getch();
    return 0;
}
