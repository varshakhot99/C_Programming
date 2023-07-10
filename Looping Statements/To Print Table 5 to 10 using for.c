
//To Print Table 5 to 10 using for.

#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0 , C = 0;

    printf("\n\n\n\n\t*******************************************************\n\n");

    for(R = 1;R <= 10; R++)
    {
        for(C = 5; C <= 10; C++)
        {
            printf("\t%3d ",R*C);
        }
        printf("\n");
    }

    printf("\n\n\t*******************************************************");

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t*******************************************************");

    getch();
    return 0;
}

