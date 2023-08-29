#include<stdio.h>
#include<conio.h>
int main()
{
    char csrc[20]={'\0'};
    int Len = 0;

    printf("\n\t***********************************************************");

    printf("\n\n\t\tEnter a string = ");
    gets(csrc);

    while(csrc[Len] != '\0')
    {
        Len++;
    }

    printf("\n\t\tLength of given string is = %d",Len);

    printf("\n\n\t***********************************************************");

    getch();
    return 0;
}
