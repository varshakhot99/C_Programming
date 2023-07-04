
//E to Q Letters Printing using do-while.

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = 'E';

    printf("\n\n\t*************************************");

    printf("\n\n\t\tE to Q Characters =>");

    do
    {
        printf("\n\n\t\t %c",ch);
        ch++;
    }while(ch <= 'Q');

    printf("\n\n\n\t*************************************");

    printf("\n\n\t\tThanks!!!");

   printf("\n\n\n\t*************************************");

    getch();
    return 0;
}

