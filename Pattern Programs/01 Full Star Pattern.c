#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0 , C = 0;

    printf("\n\n\t=======================================================");

    printf("\n\n\t\tPattern => \n");

    printf("\n\n\t=======================================================\n\n");

    for(R = 1;R <= 5;R++)
    {
        for(C = 1; C <= 5; C++)
        {
            printf("  *  ");
        }
        printf("\n");
    }

    printf("\n\n\t=======================================================");

    printf("\n\n\t\tThanks!!!");

     printf("\n\n\t=======================================================");


    getch();
    return 0;
}
