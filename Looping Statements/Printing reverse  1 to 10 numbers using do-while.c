
//To printing reverse 1 to 10 numbers using do-while.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 10;

    printf("\n\n\t*********************************************");

    do
    {
        printf("\n\t\t%d",No);
        No--;
    }while(No >= 1);

    printf("\n\n\t*********************************************");

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t*********************************************");

    getch();
    return 0;
}

