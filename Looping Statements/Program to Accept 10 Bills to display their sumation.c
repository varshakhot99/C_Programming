
//Program to accept 10 Bills to display their Summation .

#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0;
    float Bill = 0.0 , Sum = 0.0;

    printf("\n\n\n\n\t*******************************************************\n");

    for(Cnt = 1; Cnt <= 10; Cnt++)
    {
        printf("\n\t\tEnter Bill No %d = ",Cnt);
        scanf("%f",&Bill);

        Sum = Sum + Bill;
    }

    printf("\n\n\t*******************************************************");

    printf("\n\n\tSummation Of Given Bills = %3f",Sum);

    printf("\n\n\t*******************************************************");

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t*******************************************************");

    getch();
    return 0;
}

