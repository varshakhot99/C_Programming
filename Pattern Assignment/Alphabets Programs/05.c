
///Program to print left lower pattern using Alphabets.

#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0 ,C = 0 , i = 0;
    char ch = '\0';

    printf("\n\n\t========================================================================");

    printf("\n\n\t\tEnter Size for pattern = ");
    scanf("%d",&i);

    printf("\n\n\t========================================================================\n\n");

    for(R = 1 , ch = 'A'; R <= i; R++)
    {
        for(C = 1; C <= i; C++)
        {
            if(R == C || R >= C)
            {
              printf("\t%c",ch);
              ch = ch + 3;

                 if(ch > 'Z')
                 {
                     ch = 'A'+(ch - 'Z')-1;
                 }
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\n\n\t========================================================================");

    return 0;
}
