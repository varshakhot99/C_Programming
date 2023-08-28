#include<stdio.h>
#include<conio.h>
int main()
{
    char csrc[20]={'\0'};
    char cdest[20]={};
    int i=0,j=0;

    printf("\n\n\t*********************************************************");

    printf("\n\n\t\tEnter String = ");
    gets(csrc);

    while(csrc[i]!='\0')
    {
        i++;
    }
    for(i=i-1 , j =0 ; i>=0 ; i-- , j++)
    {
        cdest[j]=csrc[i];
    }
    cdest[j]='\0';
    printf("\n\t\tGiven String is = %s!!!",csrc);
    printf("\n\n\t\tReverse of given string is = %s",cdest);

    printf("\n\n\t*********************************************************");


    getch();
    return 0;
}
