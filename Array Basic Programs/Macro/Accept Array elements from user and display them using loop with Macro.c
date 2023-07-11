
//Accept Array elements from user and display them using loop with Macro.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main()
{
    int i = 0 , ArrVal[Size] = {};

    printf("\n\n\t**************************************************************************");

    for(i = 0 ; i < Size; i++)
    {
        printf("\n\n\t\t\tEnter Elements No %d = ",i+1);
        scanf("%d",&ArrVal[i]);
    }

    getch();
    system("cls");

    printf("\n\n\t**************************************************************************");

    for(i = 0; i < Size; i++)
    {
        printf("\n\n\t\t\tValues of %d Elements = %d",i+101,ArrVal[i]);
    }

    printf("\n\n\t**************************************************************************");

    getch();
    return 0;
}
