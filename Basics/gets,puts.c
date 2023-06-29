
#include<stdio.h>
#include<conio.h>

int main()
{
    char Name[20] = "Ganapati Bappa";

    printf("\n\n\t**************************************************************************");

    printf("\n\n\t\t\tMiss You %s", Name);

    gets(Name);
    puts("\n\t\t\tMiss You");
    puts(Name);

    printf("\n\n\t**************************************************************************");

    getch();
    return 0;
}
