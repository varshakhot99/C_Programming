
//TO Print Days using switch.

#include<stdio.h>
#include<conio.h>

int main()
{
    int Day;

    printf("\n\n\t*******************************************************");

    printf("\n\n\t\tEnter Number (1-7) to print Day : ");
    scanf("%d",&Day);

    switch(Day)
    {
        case 1:
        {
            printf("\n\n\t\tMonday");
            break;
        }
        case 2:
        {
            printf("\n\n\t\tTuesday");
            break;
        }
         case 3:
        {
            printf("\n\n\t\tWednesday");
            break;
        }
         case 4:
        {
            printf("\n\n\t\tThursday");
            break;
        }
         case 5:
        {
            printf("\n\n\t\tFriday");
            break;
        }
         case 6:
        {
            printf("\n\n\tSaturday");
            break;
        }
         case 7:
        {
            printf("\n\n\t\tSunday");
            break;
        }
         default :
            printf("\n\n\t\tInvalid Day");
    }

    printf("\n\n\n\t\tThanks!!!");

    printf("\n\n\t*******************************************************");

    getch();
    return 0;
}
