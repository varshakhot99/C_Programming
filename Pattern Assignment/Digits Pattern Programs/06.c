#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0 ,C = 0;
    int i = 1;

    for(R = 1; R <= 5; R++)
    {
        for(C = 1; C <= R; C++)
        {
            printf(" %3d ",i++);
        }
        printf("\n");
    }

    return 0;
}
