#include<stdio.h>
#include<conio.h>
int main()
{
    int Len = 0;
    char Name[20]="Unknown";

    printf("\n\t***********************************************************");

    printf("\n\n\t\tName String Value = %s",Name);

    printf("\n\n\t\tEnter Your Name = ");
    gets(Name);

    Len = strlen(Name);

    printf("\n\t\tLength of given string is = %d",Len);

    printf("\n\n\t***********************************************************");

    getch();
    return 0;
}
