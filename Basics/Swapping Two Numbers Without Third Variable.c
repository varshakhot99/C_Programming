
//Program to accept 10 Bills to display their Summation .

#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0;

    printf("\n\n\n\t***************************************************************\n");

    printf("\n\t\tEnter Value For No1 = ");
    scanf("%d",&No1);

    printf("\n\t\tEnter Value For No2 = ");
    scanf("%d",&No2);

    printf("\n\n\t***************************************************************");

    printf("\n\n\t\tBefore Swapping \n\n\t\tNo1 = %d\n\t\tNo2 = %d",No1,No2);

    No1 = No1 + No2;
    No2 = No1 - No2;
    No1 = No1 - No2;

    printf("\n\n\n\t***************************************************************\n");

    printf("\n\t\tAfter Swapping \n\n\t\tNo1 = %d\n\t\tNo2 = %d",No1,No2);

    printf("\n\n\n\t***************************************************************\n");

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\n\t***************************************************************\n");

    getch();
    return 0;
}

