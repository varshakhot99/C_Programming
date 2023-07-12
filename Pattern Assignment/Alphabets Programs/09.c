#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0 ,C = 0 , i = 0;
    char ch = 'A';

    printf("\n\n\t\tEnter Count = ");
    scanf("%d",&i);

    for(R = 1; R <= i; R++)
    {
        for(C = 1; C <= i; C++)
        {
            if(R >= C)
            {
                printf(" %c ",ch);
            }
            else
            {
                printf("   ");
                printf("\n");
            }
            ch++;
        }
    }

    getch();
    return 0;
}
