#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0 ,C = 0;
    printf("\n");
    for(R = 1; R <= 5; R++)
    {
        for(C = 1; C <= R; C++)
        {
            printf(" 7 ");
        }
        printf("\n");
    }

    return 0;
}
