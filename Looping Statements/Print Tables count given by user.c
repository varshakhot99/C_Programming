
//Print Tables count given by user .

#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0 , C = 0 ,Sp = 0,Ep = 0;

    printf("\n\n\n\n\t*******************************************************\n");

    printf("\n\t\tEnter Starting Point = ");
    scanf("%d",&Sp);

    printf("\n\t\tEnter Ending Point =  ");
    scanf("%d",&Ep);

    for(R = 1;R <= 10; R++)
    {
        for(C = Sp; C <= Ep; C++)
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

