
//To printing Numbers 1 to 100 given by user using for.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n\n\t\tEnter Number = ");
    scanf("%d",&No);

    printf("\n\n\t*********************************************");

    for( ;No <= 100;No++)
    {
        printf("\n\t\t%d",No);
    }

    printf("\n\n\t*********************************************");

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t*********************************************");

    getch();
    return 0;
}

