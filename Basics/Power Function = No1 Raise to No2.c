
//Power Function.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0 ,No2 = 0 ,Pow = 0 ,Cnt = 0;

    printf("\n\n\n\n\t*******************************************************\n");

  Up:
    printf("\n\t\tEnter Base = ");
    scanf("%d",&No1);

    printf("\n\t\tEnter Exponent = ");
    scanf("%d",&No2);

    if(No1 < 0 || No2 < 0)
    {
        printf("\n\t\tInvalid Input, Enter Positive Numbers...");
        goto Up;
    }
    else if(No1 == 0 || No2 == 0)
    {
        Pow = No1;
        goto Dwn;
    }

    for(Pow = 1,Cnt = No2 ; Cnt > 0; Cnt--)
    {
        printf("\n\t\t %d",Cnt);
        Pow = Pow  * No1;
    }

  Dwn:
    printf("\n\n\t\tResult %d ^ %d = %d",No1,No2,Pow);

    printf("\n\n\t*******************************************************");

    printf("\n\n\t\tThanks!!!");

    printf("\n\n\t*******************************************************");

    getch();
    return 0;
}

