
//Fibonacci Series.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0 ,No1 = 0 ,No2 = 1 ,No3 = 0;

    printf("\n\n\n\n\t*******************************************************\n");

  Up:
    printf("\n\t\tEnter Count to print Fibonacci Series = ");
    scanf("%d",&Cnt);

    if(Cnt <= 0)
    {
        printf("\n\t\tInvalid Count , Enter Positive Numbers = ");
        goto Up;
    }

    printf("\n\t\tFibonacci Series is =>\n\n\t\t %d %d",No1,No2);

    while(Cnt > 2)
    {
        No3 = No1 + No2;

        printf(" %d",No3);

        No1 = No2;
        No2 = No3;
        Cnt--;
    }

    printf("\n\n\t*******************************************************");

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t*******************************************************");

    getch();
    return 0;
}

