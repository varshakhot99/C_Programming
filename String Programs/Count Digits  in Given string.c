#include<stdio.h>
#include<conio.h>
int main()
{
    char csrc[50]={'\0'};
    int Dig_cnt = 0 , i=0;

    printf("\n\n\t*****************************************************************");

    printf("\n\n\t\tEnter String = ");
    gets(csrc);

    while(csrc[i]!='\0')
    {
        if(csrc[i] >= '0' && csrc[i] <= '9')
        {
            Dig_cnt++;
        }
        i++;
    }

    printf("\n\n\t\tCount of Capital Letters in given string is = %d",Dig_cnt);

    printf("\n\n\t*****************************************************************");


    getch();
    return 0;
}
