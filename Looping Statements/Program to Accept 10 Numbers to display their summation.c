
//Program to accept 10 Bills to display their Summation .

#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0 ,No = 0 ,Sum = 0;

    printf("\n\n\n\n\t*******************************************************\n");

    for(Cnt = 1; Cnt <= 10; Cnt++)
    {
        printf("\n\t\tEnter Number %d = ",Cnt);
        scanf("%d",&No);

        Sum = Sum + No;
    }

    printf("\n\n\t*******************************************************");

    printf("\n\t\tSummation of Given 10 Numbers = %3d",Sum);

    printf("\n\n\t*******************************************************");

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t*******************************************************");

    getch();
    return 0;
}

