
///Create,Accept,Display Array using loop - with macro,Find count of odd elements in array.

#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
    int i = 0 , O_Cnt = 0, num[size];

    printf("\n\n\t************************************************************************************");

    for(i = 0; i < size; i++)
    {
        printf("\n\n\t\tEnter %d Element = ",i+1);
        scanf("%d",&num[i]);
    }

    printf("\n\n\t************************************************************************************");

    for(i = 0; i < size; i++)
    {
        if( (i == 0) || (num[i] % 2 == 1))
        {
            O_Cnt++;
        }
    }

    printf("\n\n\t\tOdd Numbers count in array = %d.",O_Cnt);

    printf("\n\n\t************************************************************************************");

    getch();
    return 0;
}
