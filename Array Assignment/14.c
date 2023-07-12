
///Create,Accept,Display Array using loop - with macro,Find count of Numm (Zero) Element in that array.

#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
    int i = 0 , Z_Cnt = 0, num[size];

    printf("\n\n\t************************************************************************************");

    for(i = 0; i < size; i++)
    {
        printf("\n\n\t\tEnter %d Element = ",i+1);
        scanf("%d",&num[i]);
    }

    printf("\n\n\t************************************************************************************");

    for(i = 0; i < size; i++)
    {
        if( (num[i] == 0))
        {
            Z_Cnt++;
        }
    }

    printf("\n\n\t\tZero's count in array = %d.",Z_Cnt);

    printf("\n\n\t************************************************************************************");

    getch();
    return 0;
}
