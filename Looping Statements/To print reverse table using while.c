
//To Print reverse table using while.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 11 , Cnt = 10;

    printf("\n\n\n\n\t*******************************************************");

    while(Cnt >= 1)
    {
        printf("\n\n\t\t %3d * %3d = %3d",No,Cnt,(No*Cnt));
        Cnt--;
    }

    printf("\n\n\t*******************************************************");

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t*******************************************************");

    getch();
    return 0;
}
