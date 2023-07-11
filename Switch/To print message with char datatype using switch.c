
//TO Print message with char Data-type using switch.

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n\n\t*******************************************************");

    printf("\n\n\t\tEnter Character to print Message : ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'A':
        case 'a':
        {
            printf("\n\n\t\tWelcome");
            break;
        }
        case 'B':
        case 'b':
        {
            printf("\n\n\t\tGood Bye");
            break;
        }
         case 'C':
         case 'c':
        {
            printf("\n\n\t\tHave a Nice Day");
            break;
        }
         case 'D':
         case 'd':
        {
            printf("\n\n\t\tGood Day");
            break;
        }
         default :
            printf("\n\n\t\tInvalid");
    }

    printf("\n\n\n\t\tThanks!!!");

    printf("\n\n\t*******************************************************");

    getch();
    return 0;
}
