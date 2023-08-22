#include<stdio.h>
#include<conio.h>
int main()
{
    char csrc[50]={'\0'};
    int i=0;

    printf("\n\n\t*****************************************************************");

    printf("\n\n\t\tEnter String = ");
    gets(csrc);

    while(csrc[i] != '\0')
    {
        if(csrc[i] >= 'a' && csrc[i] <= 'z')
        {
            csrc[i] = csrc[i] - 32;
        }
        else if(csrc[i] >= 'A' && csrc[i] <= 'Z')
        {
            csrc[i] = csrc[i] + 32;
        }
        i++;
    }

    printf("\n\n\t\tGiven string in Toggle Case = %s",csrc);

    printf("\n\n\t*****************************************************************");


    getch();
    return 0;
}
