
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
        printf("\n\n\t\tGiven Number is Neutral");
    }
    else if((No % 5 == 0) && (No % 7 == 0))
    {
        printf("\n\n\t\tGiven Number is divisible by both 5 and 7");
    }
    else if(No % 5 == 0)
    {
        printf("\n\n\t\tGiven Number is divisible by 5");
    }
    else if(No % 7 == 0)
    {
        printf("\n\n\t\tGiven Number is divisible by 7");
    }
    else
    {
        printf("\n\n\t\tGiven Number is Not divisible by both 5 and 7");
    }

    printf("\n\n\t\tThanks!!!");

     printf("\n\n\t*****************************************************************");

    getch();
    return 0;
}
