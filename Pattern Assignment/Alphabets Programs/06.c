
///Program to print left lower pattern using Alphabets.

#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0 ,C = 0 , X = 0;


    printf("\n\n\t========================================================================");

    printf("\n\n\t\tEnter Size for pattern = ");
    scanf("%d",&X);

    printf("\n\n\t========================================================================\n\n");

    for(R = 1; R <= X; R++)
    {
        for(C = 1; C <= X; C++)
        {
            if(R >= C)
            {
                printf("\tQ");
            }
        }
        printf("\n");
    }

    printf("\n\n\t========================================================================");

    return 0;
}
