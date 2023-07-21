//Pointer Implementation

#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 15;
    int *iPtr = &No;
    void *vPtr = &No;

    printf("\n Address of No = %d",&No);
    printf("\n Address of iPtr = %d",&iPtr);
    printf("\n Value in iPtr = %d",iPtr);
    printf("\n Value in No = %d",No);
    printf("\n Value in No by Pointer = %d",*iPtr);

    printf("\n Address of vPtr = %d",&vPtr);
    printf("\n Value in vPtr = %d",vPtr);     ///21
   // printf("\n Value of No by void pointer = %d",*vPtr);    ///732

    getch();
    return 0;
}
