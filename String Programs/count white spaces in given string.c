#include<stdio.h>
#include<conio.h>
int main()
{
    char csrc[20]={'\0'};
    int space_cnt = 0 , i=0;

    printf("\n\n\t*********************************************************");

    printf("\n\n\t\tEnter String = ");
    gets(csrc);

    while(csrc[i]!='\0')
    {
        if(csrc[i] == ' ')
        {
            space_cnt++;
        }
        i++;
    }

    printf("\n\n\t\tWhite spaces given string is = %d",space_cnt);

    printf("\n\n\t*********************************************************");


    getch();
    return 0;
}
