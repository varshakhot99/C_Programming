
//Check whether given letter is Vowel or Consonant or Digit using else if ladder.

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
        printf("\n\n\t\tGiven Character is Vowel");
    }
    else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("\n\n\t\tGiven Character is Consonant");
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("\n\n\t\tGiven character is Digit");
    }
    else
    {
        printf("\n\n\t\tSpecial Symbol");
    }

    printf("\n\n\n\t****************************************************");

    printf("\n\n\t\tThanks!!!");

   printf("\n\n\n\t*****************************************************");

    getch();
    return 0;
}

