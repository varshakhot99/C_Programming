
//To Print Table using do-while.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 9 , Cnt = 1;

    printf("\n\n\n\n\t****************************************************");

    do
    {
        printf("\n\n\t\t%3d * %3d = %3d",No,Cnt,(No*Cnt));
        Cnt++;
    }while(Cnt <= 10);

    printf("\n\n\t*******************************************************");

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t*******************************************************");

    getch();
    return 0;
}

