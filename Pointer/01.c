//Pointer Implementation

#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 21;
    int *p = &No;
    int **q = &p;
    int ***m = &q;
    int ****x = &m;
    int *****r = &x;

    printf("\n %d",&No);
    printf("\n %d",&p);
    printf("\n %d",&q);
    printf("\n %d",&m);
    printf("\n %d",&x);
    printf("\n %d",&r);
    printf("\n**********************************************");
    getch();

    printf("\n %d",No);     ///21
    printf("\n %d",&No);    ///732
    printf("\n %d",&p);     ///728
    printf("\n %d",*p);     ///21
    printf("\n %d",**r);     ///724
    printf("\n %d",**(&m));  ///728
    printf("\n %d",****r);   ///732

    getch();
    return 0;
}
