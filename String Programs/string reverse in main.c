#include<stdio.h>
#include<conio.h>
int main()
{
    char csrc[20]={'\0'};
    char cdest[20]={};
    int i=0,j=0;

    printf("\nEnter String = ");
    gets(csrc);

    while(csrc[i]!='\0')
    {
        i++;
    }
    i=i-1;
    while(i>=0)
    {
        cdest[j]=csrc[i];
        i--;
        j++;
    }
    cdest[j]='\0';
    printf("\nGiven String is = %s!!!",csrc);
    printf("\nReverse of given string is = %s",cdest);

    getch();
    return 0;
}
