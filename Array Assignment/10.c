
///Create,Accept,Display Array using loop - with macro,Find Minimum Element in that array.

#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
    int i = 0 , Min = 0, num[size];

    printf("\n\n\t************************************************************************************");

    for(i = 0; i < size; i++)
    {
        printf("\n\n\t\tEnter %d Element = ",i+1);
        scanf("%d",&num[i]);
    }

    printf("\n\n\t************************************************************************************");

    for(i = 0; i < size; i++)
    {
        if( (i == 0) || (num[i] < Min))
        {
            Min = num[i];
        }
    }

    printf("\n\n\t\tMinimum Numbers in array is = %d.",Min);

    printf("\n\n\t************************************************************************************");

    getch();
    return 0;
}
