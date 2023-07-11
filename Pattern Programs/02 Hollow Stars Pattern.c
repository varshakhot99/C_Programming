#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0 , C = 0;

    printf("\n\n\t=======================================================\n\n");

    printf("\n\n\t\tHollow Pattern =>");

    printf("\n\n\t=======================================================\n\n");

    for(R = 1;R <= 7;R++)
    {
        for(C = 1; C <= 5; C++)
        {
            if(R == 1 || R == 7 || C == 1 || C == 5)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\n\n\t=======================================================");

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t=======================================================");

    getch();
    return 0;
}
