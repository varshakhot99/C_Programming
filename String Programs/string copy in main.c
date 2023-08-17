#include<stdio.h>
#include<conio.h>
int main()
{
    char csrc[20]="";
    char cdest[20]="";
    int i=0;

    printf("\n\t*************************************************************************");

    printf("\n\n\t\tEnter Your City Name = ");
    gets(csrc);

    while(csrc[i]!='\0')
    {
        cdest[i]=csrc[i];
        i++;
    }

    cdest[i]='\0';
    printf("\n\n\t\tNew String after copying = %s!!!",cdest);

    printf("\n\n\t*************************************************************************");

    getch();
    return 0;
}
