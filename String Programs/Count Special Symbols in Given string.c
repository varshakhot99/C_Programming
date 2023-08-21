#include<stdio.h>
#include<conio.h>
int main()
{
    char csrc[50]={'\0'};
    int Spl_cnt = 0 , i=0;

    printf("\n\n\t*****************************************************************");

    printf("\n\n\t\tEnter String = ");
    gets(csrc);

    while(csrc[i] != '\0')
    {
        if(!(csrc[i] >= 'A') && (csrc[i] <= 'Z') || !(csrc[i] >= 'a') && (csrc[i] <= 'z') || !(csrc[i] >= '0') && (csrc[i] <= '9'))
        {
            Spl_cnt++;
        }
        i++;
    }

    printf("\n\n\t\tCount of Special Symbols in given string is = %d",Spl_cnt);

    printf("\n\n\t*****************************************************************");


    getch();
    return 0;
}
