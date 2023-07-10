
//To Print Table using do-while.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Cnt =0;

    printf("\n\n\n\n\t*******************************************************");

    for(No = 25,Cnt = 1;Cnt <= 10;Cnt++)
    {
        printf("\n\n\t\t%3d * %3d = %3d",No,Cnt,(No*Cnt));
    }

    printf("\n\n\t*******************************************************");

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t*******************************************************");

    getch();
    return 0;
}

