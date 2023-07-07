
//To printing reverse 1 to 10 numbers using while.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 10;

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

