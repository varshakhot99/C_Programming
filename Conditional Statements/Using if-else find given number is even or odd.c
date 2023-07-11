
//To Check Given number is Even or Odd using if-else.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n\n\t*****************************************************************");

    printf("\n\n\t\tEnter number to check whether i is even or odd = ");
    scanf("%d",&No);

    if(No == 0)
    {
        printf("\n\t\tGiven Number is Neutral.");
    }
    else if(No < 0)
    {
        printf("\n\t\tPlease Enter Positive Number.");
    }
    else if(No % 2 == 0)
    {
        printf("\n\t\tGiven Number is Even.");
    }
    else
    {
        printf("\n\t\tGiven Number is Odd.");
    }

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t*****************************************************************");


    getch();
    return 0;
}

