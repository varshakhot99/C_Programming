
//Printing Days Using else-if ladder with char data-type.

#include<stdio.h>
#include<conio.h>

int main()
{
    char Day = '0';

    printf("\n\n\t***************************************************************");

    printf("\n\n\t\tEnter Number between (1-7) to print Day = ");
    scanf("%c",&Day);

    if(Day == '1')
    {
        printf("\n\n\t\tMonday");
    }
    else if(Day == '2')
    {
        printf("\n\n\t\tTuesday");
    }
    else if(Day == '3')
    {
        printf("\n\n\t\tWednesday");
    }
    else if(Day == '4')
    {
        printf("\n\n\t\tThursday");
    }
    else if(Day == '5')
    {
        printf("\n\n\t\tFriday");
    }
    else if(Day == '6')
    {
        printf("\n\n\t\tSaturday");
    }
    else if(Day == '7')
    {
        printf("\n\n\t\tSunday");
    }
    else
    {
        printf("\n\n\t\tInvalid Day!!!!");
    }

    printf("\n\n\n\t\tThanks!!!!");

    printf("\n\n\t***************************************************************");

    getch();
    return 0;
}
