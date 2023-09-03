#include<stdio.h>
#include<conio.h>
int main()
{
    char csrc[50]={'\0'};
    int i=0 , j = 0;

    printf("\n\n\t*****************************************************************");

    printf("\n\n\t\tEnter String = ");
    gets(csrc);

    while(csrc[i] != '\0')
    {
        i++;
    }
    i--;
    while(j<i)
    {
        if(csrc[i] != csrc[j])
        {
            break;
        }
        i--;
        j++;
    }
    if(i <= j)
    {
        printf("\n\n\t\tGiven String %s is Palindrome.",csrc);
    }
    else
    {
        printf("\n\n\t\tGiven String %s is Not Palindrome.",csrc);
    }

    printf("\n\n\t*****************************************************************");


    getch();
    return 0;
}
