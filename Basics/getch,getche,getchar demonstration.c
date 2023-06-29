

 //getch,getche,getchar demonstration.c

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = 'A';

    printf("\n\n\t\tEntered Character = %c",ch);
    ch = getch();

    printf("\n\n\t\tEntered Character = %c",ch);
    ch = getche();

    printf("\n\n\t\tEntered Character = %c",ch);
    ch = getchar();

    printf("\n\n\t\tEntered Character = %c",ch);

    getch();
    return 0;


}

