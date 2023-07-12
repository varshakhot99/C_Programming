
///Create,Accept,Display Array Using Loop - with macro,Find Summation of All Elements in that Array.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

int main()
{
    int num[size] = {}, i = 0, Sum = 0;

    printf("\n\n\t**************************************************************");

    printf("\n\n\t\tEnter Array Elements : ");

    for(i = 0; i < size; i++)
    {
        printf("\n\n\t\tEnter value of %d elements = ",i+1);
        scanf("%d",&num[i]);
    }

    system("cls");

    printf("\n\n\t**************************************************************");

    for(i = 0; i< size; i++)
    {

            Sum = Sum + num[i];

    }

    printf("\n\n\t\tSum of Array  = %d",Sum);

    printf("\n\n\t**************************************************************");

    getch();
    return 0;
}
