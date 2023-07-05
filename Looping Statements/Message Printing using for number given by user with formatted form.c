
//Message Printing using for number given by user with formatted form.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0 ,No = 1;

    printf("\n\n\t*******************************************************");

    printf("\n\n\t\tEnter Count = ");
    scanf("%d",&Cnt);

    for( ;Cnt>0;Cnt--,No++)
    {
        printf("\n\n\t\t%3d INDIA",No);
    }

    printf("\n\n\t*******************************************************");

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t*******************************************************");

    getch();
    return 0;
}
