
#include<stdio.h>
#include<conio.h>

int main()
{
    int Num[5] = { 11 , 99 , 89 , 67 , 34};

    printf("\n\n\t**************************************************************************");

    printf("\n\n\t\t\tValue of 1st Element = %2d ",Num[0]);
    printf("\n\n\t\t\tValue of 2nd Element = %2d ",Num[1]);
    printf("\n\n\t\t\tValue of 3rd Element = %2d ",Num[2]);
    printf("\n\n\t\t\tValue of 4th Element = %2d ",Num[3]);
    printf("\n\n\t\t\tValue of 5th Element = %2d ",Num[4]);

    getch();

    Num[0] = Num[1];   ///99

    Num[1] = 55;       ///55

    Num[2] = 77;       ///77

    Num[3] += 2;    ///69

    Num[4]++;   ///35

    printf("\n\n\t**************************************************************************");

    printf("\n\n\t\t\tValue of 1st Element = %2d ",Num[0]);
    printf("\n\n\t\t\tValue of 2nd Element = %2d ",Num[1]);
    printf("\n\n\t\t\tValue of 3rd Element = %2d ",Num[2]);
    printf("\n\n\t\t\tValue of 4th Element = %2d ",Num[3]);
    printf("\n\n\t\t\tValue of 5th Element = %2d ",Num[4]);

    getch();
    return 0;
}
