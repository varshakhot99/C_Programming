#include<stdio.h>
#include<conio.h>
int main()
{
    char csrc[50]={'\0'};
    int i=0 , Num = 0;

    printf("\n\n\t*****************************************************************");

    printf("\n\n\t\tEnter String = ");
    gets(csrc);

    while(csrc[i] != '\0')
    {
        if(csrc[i] >= '0' && csrc[i] <= '9')
        {
           Num = (Num * 10) + (csrc[i] - 48);
        }
        i++;
    }

    printf("\n\n\t\tNumbers From Digits in Given string = %d",Num);

    printf("\n\n\t*****************************************************************");


    getch();
    return 0;
}
