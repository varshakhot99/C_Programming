
///Create array of 7 elements with null(0) initialization,Accept & Display All Elements with Loop.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i = 0, Arr[7] = {};

    printf("\n\n\t**************************************************************");

    for(i = 0; i < 7; i++)
    {
        printf("\n\n\t\tEnter value of %d elements = ",i+1);
        scanf("%d",&Arr[i]);
    }

    system("cls");

    printf("\n\n\t**************************************************************");

    for(i = 0; i< 7; i++)
    {
        printf("\n\n\t\tValue of %d element = %d",i+101,Arr[i]);
    }

    printf("\n\n\t**************************************************************");

    getch();
    return 0;
}
