
///create array of 7 elements with null(0) initialization & display all elements.

#include<stdio.h>
#include<conio.h>

int main()
{
    int num[7] = {0};

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
