
///Create,Accept,Display Array using loop - with macro,Find count of Even,Odd,Null(Zero) Element in that array.

#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
    int i = 0 , E_Cnt = 0 , O_Cnt = 0 , Z_Cnt = 0, num[size];

    printf("\n\n\t************************************************************************************");

    for(i = 0; i < size; i++)
    {
        printf("\n\n\t\tEnter %d Element = ",i+1);
        scanf("%d",&num[i]);
    }

    printf("\n\n\t************************************************************************************");

    for(i = 0; i < size; i++)
    {
        if(num[i] % 2 == 0)
        {
            E_Cnt++;
        }
    }
    for(i = 0; i < size; i++)
    {
        if(num[i] % 2 == 1)
        {
            O_Cnt++;
        }
    }
    for(i = 0; i < size; i++)
    {
        if(num[i] == 0)
        {
            Z_Cnt++;
        }
    }

    printf("\n\n\t\tEven Count in array = %d",E_Cnt);
    printf("\n\n\t\tOdd Count i array = %d",O_Cnt);
    printf("\n\n\t\tZero's count in array = %d.",Z_Cnt);

    printf("\n\n\t************************************************************************************");

    getch();
    return 0;
}
