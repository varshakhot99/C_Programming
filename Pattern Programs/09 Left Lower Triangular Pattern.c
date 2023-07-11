#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0 , C = 0 , i = 0;

    printf("\n\n\t=======================================================\n");

    printf("\n\t\tEnter Row Count And Column Count = ");
    scanf("%d",&i);

    printf("\n\n\t=======================================================\n\n");

    for(R = 1; R <= i; R++)
    {
        for(C = 1; C <= i; C++)
        {
            if(R >= C)    //(R > C || R == C)
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
