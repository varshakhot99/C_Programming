#include<stdio.h>
#include<conio.h>
int main()
{
    char csrc[50]={'\0'};
    int Ltr_cnt = 0 , i=0;

    printf("\n\n\t*****************************************************************");

    printf("\n\n\t\tEnter String = ");
    gets(csrc);

    while(csrc[i]!='\0')
    {
        if(csrc[i] >= 'A' && csrc[i] <= 'Z')
        {
            Ltr_cnt++;
        }
        i++;
    }

    printf("\n\n\t\tCount of Capital Letters in given string is = %d",Ltr_cnt);

    printf("\n\n\t*****************************************************************");


    getch();
    return 0;
}
