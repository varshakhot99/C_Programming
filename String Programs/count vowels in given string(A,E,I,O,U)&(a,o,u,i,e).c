#include<stdio.h>
#include<conio.h>
int main()
{
    char csrc[20]={'\0'};
    int v_cnt = 0,i=0;

    printf("\n\t*************************************************************************");

    printf("\n\n\t\tEnter a string = ");
    gets(csrc);

    while(csrc[i]!='\0')
    {
       if(csrc[i]=='a'||csrc[i]=='o'||csrc[i]=='u'||csrc[i]=='e'||csrc[i]=='i'||csrc[i]=='A'||csrc[i]=='O'||csrc[i]=='U'||csrc[i]=='E'||csrc[i]=='I')
       {
           v_cnt++;
       }
       i++;
    }
    printf("\n\n\t\tCount of vowels in given string is = %d",v_cnt);

    printf("\n\n\t*************************************************************************");

    getch();
    return 0;
}
