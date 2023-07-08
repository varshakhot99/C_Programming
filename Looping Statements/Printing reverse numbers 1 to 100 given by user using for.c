
//To printing reverse Numbers 1 to 100 given by user using for.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 100;

    printf("\n\n\t\tEnter Number = ");
    scanf("%d",&No);

    printf("\n\n\t*********************************************");

    for( ;No >= 1;No--)
    {
        printf("\n\t\t%d",No);
    }

    printf("\n\n\t*********************************************");

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t*********************************************");

    getch();
    return 0;
}

