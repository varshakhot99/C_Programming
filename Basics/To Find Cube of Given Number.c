
//To Find Cube of given number.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, cube = 0;

    printf("\n\n\t*******************************************************");

    printf("\n\n\t\tEnter Number to find its Cube = ");
    scanf("%d",&No);

    cube = No * No * No;

    printf("\n\n\t\tCube Of %d = %d",No,cube);

    printf("\n\n\t*******************************************************");

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t*******************************************************");

    getch();
    return 0;
}

