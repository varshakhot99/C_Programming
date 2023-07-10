
//To Print reverse table using while number given by user.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , Cnt = 10;

    printf("\n\n\n\n\t*******************************************************");

    printf("\n\n\t\tEnter number to reverse its table = ");
    scanf("%d",&No);

    do
    {
        printf("\n\n\t\t %3d * %3d = %3d",No,Cnt,(No*Cnt));
        Cnt--;
    }while(Cnt >= 1);

    printf("\n\n\t*******************************************************");

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t*******************************************************");

    getch();
    return 0;
}
