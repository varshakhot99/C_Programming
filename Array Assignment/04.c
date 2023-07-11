
///Create array of 7 elements with null(0) initialization & accept all elements without loop display All elements.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int num[7] = {0};

    printf("\n\n\t*********************************************************");

    printf("\n\n\t\tEnter 1st element = ");
    scanf("%d",&num[0]);

    printf("\n\n\t\tEnter 2nd element = ");
    scanf("%d",&num[1]);

    printf("\n\n\t\tEnter 3rd element = ");
    scanf("%d",&num[2]);

    printf("\n\n\t\tEnter 4th element = ");
    scanf("%d",&num[3]);

    printf("\n\n\t\tEnter 5th element = ");
    scanf("%d",&num[4]);

    printf("\n\n\t\tEnter 6th element = ");
    scanf("%d",&num[5]);

    printf("\n\n\t\tEnter 7th element = ");
    scanf("%d",&num[6]);

    system("cls");

    printf("\n\n\t*********************************************************");

    printf("\n\n\t\tValues of Elements => ");

    printf("\n\n\t*********************************************************");

    printf("\n\n\t\tValue of 1st element = %d",num[0]);
    printf("\n\n\t\tValue of 2nd element = %d",num[1]);
    printf("\n\n\t\tValue of 3rd element = %d",num[2]);
    printf("\n\n\t\tValue of 4th element = %d",num[3]);
    printf("\n\n\t\tValue of 5th element = %d",num[4]);
    printf("\n\n\t\tValue of 6th element = %d",num[5]);
    printf("\n\n\t\tValue of 7th element = %d",num[6]);

    printf("\n\n\t*********************************************************");

    getch();
    return 0;
}
