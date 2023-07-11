
//TO Find maximum from three numbers.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0 , No2 = 0 ,No3 = 0 , Max = 0;

    printf("\n\n\t*******************************************************");

    printf("\n\n\t\tEnter Value for No1 : ");
    scanf("%d",&No1);

    printf("\n\n\t\tEnter Value for No2 : ");
    scanf("%d",&No2);

    printf("\n\n\t\tEnter Value for No3 : ");
    scanf("%d",&No3);

    if(No1 > No2)
    {
        if(No1 > No3)
        {
            Max = No1;
        }
        else
        {
            Max = No3;
        }
    }
    else
    {
        if(No2 > No3)
        {
            Max = No2;
        }
        else
        {
            Max = No3;
        }
    }
    printf("\n\n\n\t\tMaximum among all those three numbers = %d",Max);

    printf("\n\n\t*******************************************************");

    getch();
    return 0;
}
