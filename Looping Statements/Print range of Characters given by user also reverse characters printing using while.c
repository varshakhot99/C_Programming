
//Print range of characters given by user also reverse characters printing using while.

#include<stdio.h>
#include<conio.h>

int main()
{
    char S_Pt = '\0', E_Pt = '\0';

    printf("\n\n\t******************************************");

    printf("\n\n\t\tEnter Starting Point => ");
    S_Pt = getche();

    printf("\n\n\t\tEnter Ending Point => ");
    E_Pt = getche();

    if(S_Pt < E_Pt)
    {
        while(S_Pt <= E_Pt)
        {
            printf("\n\n\t%c",S_Pt);
            S_Pt++;
        }
    }
    else
    {
        while(S_Pt >= E_Pt)
        {
            printf("\n\n\t\t\t%c",S_Pt);
            S_Pt--;
        }
    }

    printf("\n\n\n\t******************************************");

    printf("\n\n\t\tThanks!!!");

   printf("\n\n\n\t******************************************");

    getch();
    return 0;
}

