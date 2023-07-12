#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0 ,C = 0 , X = 0 , i = 0;

    printf("\n\n\t\tEnter Count : ");
    scanf("%d",&X);

    for(R = 1; R <= X; R++)
    {
        for(C = 1 , i = 2; C <= X; C++ , i++)
        {
            if(R >= C)
            {
                 printf(" %3d ",i);
                 i++;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}
