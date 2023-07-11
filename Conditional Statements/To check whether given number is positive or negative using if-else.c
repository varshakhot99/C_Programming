
//TO Check whether given number is Negative or Positive.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n\n\t***************************************************************************");

    printf("\n\n\t\tEnter Number to check whether it is Positive or Negative : ");
    scanf("%d",&No);

    if(No == 0)
    {
        printf("\n\t\tGiven Number %d is Neutral",No);
    }
    else if(No > 0)
    {
        printf("\n\t\tGiven Number %d is Positive",No);
    }
    else
    {
        printf("\n\t\tGiven Number %d is Negative",No);
    }

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t***************************************************************************");

    getch();
    return 0;
}
