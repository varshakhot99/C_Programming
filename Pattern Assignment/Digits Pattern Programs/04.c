
///Program to print left lower pattern using Alphabets.

#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0 ,C = 0 , X = 0 , i = 0;


    printf("\n\n\t========================================================================");

    printf("\n\n\t\tEnter Size for pattern = ");
    scanf("%d",&X);

    printf("\n\n\t========================================================================\n\n");

    for(R = 1; R <= X; R++)
    {
        for(C = 1 , i = 2; C <= X; C++ , i++)
        {
            if(R >= C)
            {
                printf("\t%3d ",i);
                i = i + 1;
            }
        }
        printf("\n");
    }

    printf("\n\n\t========================================================================");

    return 0;
}
