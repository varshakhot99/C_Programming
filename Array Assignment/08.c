
///Create,Accept,Display Array using loop - with macro,Find count of given array in that element.

#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
    int num[size] = {} , i = 0 , Cnt = 0 , Ele = 0;

    printf("\n\n\t************************************************************************************");

    for(i = 0; i < size; i++)
    {
        printf("\n\n\t\tEnter %d Element = ",i+1);
        scanf("%d",&num[i]);
    }

    printf("\n\n\t************************************************************************************");

    printf("\n\n\t\tEnter Element to find its count = ");
    scanf("%d",&Ele);

    for(i = 0; i < size; i++)
    {
        if(num[i] == Ele)
        {
            Cnt++;
        }
    }

    printf("\n\n\t************************************************************************************");

    printf("\n\n\t\t  Entered Element %d Count in Array = %d",Ele,Cnt);

    printf("\n\n\t************************************************************************************");

    getch();
    return 0;
}
