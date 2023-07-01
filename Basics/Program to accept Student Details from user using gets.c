
//Program to accept Student Details from user.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int Roll_No = 0;
    char Name[50] = "\0";
    char Course[20] = "\0";
    char City[20] = "\0";

    printf("\n\n\n\t*************************************************************");

    printf("\n\n\t\tEnter Roll No = ");
    scanf("%d",&Roll_No);

    fflush(stdin);

    printf("\n\n\t\tEnter Name = ");
    gets(Name);

    printf("\n\n\t\tEnter Course = ");
    gets(Course);

    printf("\n\n\t\tEnter City = ");
    gets(City);

    printf("\n\n\t*************************************************************");

    printf("\n\n\n\t\tSTUDENT INFORMATION =>");

    printf("\n\n\t*************************************************************");

    printf("\n\n\t\tRoll No = %d",Roll_No);
    printf("\n\n\t\tName = %s",Name);
    printf("\n\n\t\tCourse = %s",Course);
    printf("\n\n\t\tCity = %s",City);

    printf("\n\n\t*************************************************************");

    getch();
    return 0;
}
