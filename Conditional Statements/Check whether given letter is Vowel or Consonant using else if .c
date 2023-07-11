
//Check whether given letter is Vowel or Consonant using else if .c.

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n\n\t****************************************************");

    printf("\n\n\t\tEnter Character = ");
    ch = getche();

    if(ch == 'A' || ch == 'a' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u' ||ch == 'E' || ch == 'e')
    {
        printf("\n\n\t\t Given Character is Vowel");
    }
    else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("\n\n\t\t Given Character is Consonant");
    }
    else
    {
        printf("\n\n\t\t Other");
    }

    printf("\n\n\n\t****************************************************");

    printf("\n\n\t\tThanks!!!");

   printf("\n\n\n\t*****************************************************");

    getch();
    return 0;
}

