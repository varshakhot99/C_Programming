#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0 , C = 0 , Row = 0 , Col = 0;

    printf("\n\n\t=======================================================\n");

    printf("\n\t\tEnter Row Count = ");
    scanf("%d",&Row);

    printf("\n\t\tEnter Column Count = ");
    scanf("%d",&Col);

    printf("\n\n\t=======================================================\n\n");

    for(R = 1; R <= Row; R++)
    {
        for(C = 1; C <= Col; C++)
        {
            if(R == 1 || R == Row || R == C)
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
