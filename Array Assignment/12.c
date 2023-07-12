
///create,accept,display array using loop-with macro,find count of Even elements in that array.

#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
    int i = 0 , E_Cnt = 0 , num[size];

    printf("\n\n\t************************************************************************************");

    for(i = 0; i < size; i++)
    {
        printf("\n\n\t\tEnter Element %d = ",i+1);
        scanf("%d",&num[i]);
    }

    for(i = 0; i < size; i++)
    {
        if(num[i] % 2 == 0)
        {
            E_Cnt++;
        }
    }

    printf("\n\n\t************************************************************************************");

    printf("\n\n\t\tEven Numbers count in array = %d.",E_Cnt);

    printf("\n\n\t************************************************************************************");

    getch();
    return 0;
}
