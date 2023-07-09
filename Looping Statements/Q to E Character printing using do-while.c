
//Q to E Letters Printing using do-while.

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = 'Q';

    printf("\n\n\t*************************************");

    printf("\n\n\t\tQ to E Characters =>");

    do
    {
        printf("\n\n\t\t%c",ch);
        ch--;
    }while(ch >= 'E');

    printf("\n\n\n\t*************************************");

    printf("\n\n\t\tThanks!!!");

   printf("\n\n\n\t*************************************");

    getch();
    return 0;
}

