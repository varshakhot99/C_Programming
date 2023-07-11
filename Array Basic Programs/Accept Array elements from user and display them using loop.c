
//Accept Array elements from user and display them using loop.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i = 0 , ArrVal[5] = {};

    printf("\n\n\t**************************************************************************");

    for(i = 0 ; i < 5; i++)
    {
        printf("\n\n\t\t\tEnter Elements No %d = ",i+1);
        scanf("%d",&ArrVal[i]);
    }

    getch();
    system("cls");

    printf("\n\n\t**************************************************************************");

    for(i = 0; i < 5; i++)
    {
        printf("\n\n\t\t\tValues of %d Elements = %d",i+101,ArrVal[i]);
    }

    printf("\n\n\t**************************************************************************");

    getch();
    return 0;
}
