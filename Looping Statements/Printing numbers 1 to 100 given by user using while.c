
//To printing reverse Numbers 1 to 100 given by user using while.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 100;

    printf("\n\n\t\tEnter Number = ");
    scanf("%d",&No);

    printf("\n\n\t*********************************************");

    while(No >= 1)
    {
        printf("\n\t\t%d",No);
        No--;
    }

    printf("\n\n\t*********************************************");

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t*********************************************");

    getch();
    return 0;
}

