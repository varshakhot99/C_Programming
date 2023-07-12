
///Program to print left lower pattern using Alphabets.

#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0 ,C = 0 , X = 0;
    char ch = '\0';

    printf("\n\n========================================================================");

    printf("\n\nEnter Size for pattern = ");
    scanf("%d",&X);

    printf("\n\n========================================================================\n\n");

    for(R = 1; R <= X; R++)
    {
        for(C = 1 , ch = 'A'; C <= X; C++ , ch++)
        {
            if(R == 1 || R == X || C == 1 || C == X)
            {
                printf(" %c ",ch);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\n\n========================================================================");

    return 0;
}
