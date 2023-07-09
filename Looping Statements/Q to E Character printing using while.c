
//Q to E Letters Printing using while.

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = 'Q';

    printf("\n\n\t*************************************");

    printf("\n\n\t\tQ to E Characters =>");

    while(ch >= 'E')
    {
        printf("\n\n\t\t%c",ch);
        ch--;
    }

    printf("\n\n\n\t*************************************");

    printf("\n\n\t\tThanks!!!");

   printf("\n\n\n\t*************************************");

    getch();
    return 0;
}

