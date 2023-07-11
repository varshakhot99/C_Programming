
//Accept Array elements from user and display them.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int ArrVal[5] = {};

    printf("\n\n\t**************************************************************************");

    printf("\n\n\t\t\tEnter 1st Element = ");
    scanf("%d",&ArrVal[0]);

    printf("\n\n\t\t\tEnter 2nd Element = ");
    scanf("%d",&ArrVal[1]);

    printf("\n\n\t\t\tEnter 3rd Element = ");
    scanf("%d",&ArrVal[2]);

    printf("\n\n\t\t\tEnter 4th Element = ");
    scanf("%d",&ArrVal[3]);

    printf("\n\n\t\t\tEnter 5th Element = ");
    scanf("%d",&ArrVal[4]);

    getch();
    system("cls");

    printf("\n\n\t**************************************************************************");

    printf("\n\n\t\t\t Value of Element 101 = %d",ArrVal[0]);
    printf("\n\n\t\t\t Value of Element 102 = %d",ArrVal[1]);
    printf("\n\n\t\t\t Value of Element 103 = %d",ArrVal[2]);
    printf("\n\n\t\t\t Value of Element 104 = %d",ArrVal[3]);
    printf("\n\n\t\t\t Value of Element 105 = %d",ArrVal[4]);

    printf("\n\n\t**************************************************************************");

    getch();
    return 0;
}
