
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = 'A';

    printf("\n\n\t**************************************************************************");

    printf("\n\n\t\tValue of our character is = %c......Hello Indians...\n\n",ch);

    printf("\n\n\t\tAre You Indians???",ch);
    ch = getche();

    if(ch == 'y' || ch == 'Y')
    {
        printf("\n\n\t\tWelcome Dear");
    }
    else
    {
        printf("\n\n\t\tBye Bye.....\n");
    }

    printf("\n\n\t**************************************************************************");

    getch();
    return 0;
}
