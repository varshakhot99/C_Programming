
//To Check Leap Year using if-else.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Year = 0;

    printf("\n\n\t*****************************************************************");

    printf("\n\n\t\tEnter Year = ");
    scanf("%d",&Year);

    /*
     * If year is exactly divisible by 4  and year is not divisible by 100
     * or year is exactly divisible by 400 then
     * the year is leap year.
     * Else year is normal year
     */

    if((Year % 4 == 0) && (Year % 100 != 0) || (Year % 400 == 0))
    {
        printf("\n\t\t%d is Leap Year.",Year);
    }
    else
    {
        printf("\n\t\t%d is not Leap Year.",Year);
    }

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t*****************************************************************");


    getch();
    return 0;
}

