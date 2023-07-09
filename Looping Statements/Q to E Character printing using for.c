
//Q to E Letters Printing using for.

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n\n\t*************************************");

    printf("\n\n\t\tQ to E Characters =>");

    for(ch = 'Q';ch >= 'E';ch--)
    {
        printf("\n\n\t\t%c",ch);
    }

    printf("\n\n\n\t*************************************");

    printf("\n\n\t\tThanks!!!");

   printf("\n\n\n\t*************************************");

    getch();
    return 0;
}

