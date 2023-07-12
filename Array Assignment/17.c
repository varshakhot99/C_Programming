
///Create,Accept,Display Array using loop - with macro,Find Maximum and 2nd Maximum Element in that array.

#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
    int num[size] = {}, i = 0 , Max = 0 , Sec_Max = 0 ,Flag = 0;

    printf("\n\n\t************************************************************************************");

    printf("\n\n\t\tEnter Array Elements => ");

    printf("\n\n\t************************************************************************************");

    for(i = 0; i < size; i++)
    {
        printf("\n\n\t\tEnter Element[%d] = ",i+1);
        scanf("%d",&num[i]);
    }

    for( i = 0; i < size; i++)
    {
        if((i == 0) || (num[i] > Max))
        {
            Max = num[i];
        }
    }

    for( i = 0; i < size; i++)
    {
        if(num[i] == Max)
        {
            continue;
        }
        if((Flag == 0) || (num[i] > Sec_Max))
        {
            Sec_Max = num[i];
            Flag = 1;
        }
    }
    printf("\n\n\t************************************************************************************");

    printf("\n\n\t\tMaximum Element in Array is = %d.",Max);
    printf("\n\n\t\t2nd Maximum Element in Array is = %d",Sec_Max);

    printf("\n\n\t************************************************************************************");

    getch();
    return 0;
}
