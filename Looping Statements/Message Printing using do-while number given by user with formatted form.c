
//Message Printing using while number given by user with formatted form.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0 ,No = 1;

    printf("\n\n\t*******************************************************");

    printf("\n\n\tEnter Count = ");
    scanf("%d",&Cnt);

    do
    {
        printf("\n\n\t\t %3d INDIA",No);
        Cnt--;
        No++;
    }while(Cnt > 0);

    printf("\n\n\t*******************************************************");

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t*******************************************************");

    getch();
    return 0;
}

