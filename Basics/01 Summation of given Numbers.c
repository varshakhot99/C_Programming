
//Program to accept 10 Bills to display their Summation .

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Sum = 0, Cnt = 0, Num = 0;

    printf("\n\n\n\t***************************************************************\n");

    printf("\n\n\t\tHow Many Numbers Do You Have = ");
    scanf("%d",&Num);

    for(Cnt = 1; Cnt <= Num; Cnt++)
    {
        printf("\n\n\t\tEnter Number %d = ",Cnt);
        scanf("%d",&No);

        Sum = Sum + No;
    }

    printf("\n\n\n\t***************************************************************\n");

    printf("\n\n\t\tSummation of Given Numbers = %d",Sum);

     printf("\n\n\n\t***************************************************************\n");

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\n\t***************************************************************\n");

    getch();
    return 0;
}

