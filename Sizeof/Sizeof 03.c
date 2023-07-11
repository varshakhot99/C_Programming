
///Program of Sizeof operator.

#include<stdio.h>
#include<conio.h>
struct
   {
       int No;
       float fnum;
   }obj;
int main()
{
    printf("\n\n\t*******************************************************************");

    printf("\n\n\t\tSize of SGM = %d",sizeof(unsigned long));
    printf("\n\n\t\tSize of Float = %d",sizeof(float));
    printf("\n\n\t\tSize of Double = %d",sizeof(double));
    printf("\n\n\t\tSize of Long = %d",sizeof(long));
    printf("\n\n\t\tSize of structure Object = %d",sizeof(obj));

    printf("\n\n\t*******************************************************************");
    getch();
    return 0;
}
