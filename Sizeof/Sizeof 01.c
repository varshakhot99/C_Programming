
///Program of Sizeof operator.

#include<stdio.h>
#include<conio.h>
int main()
{
    int intType;
    char chatType;
    float floatType;
    double doubleType;
    long double longdoubleType;

    printf("\n\n\t*******************************************************************");
    printf("\n\n\t\tSize of Integer DataType = %d",sizeof(intType));
    printf("\n\n\t\tSize of Float DataType = %d",sizeof(chatType));
    printf("\n\n\t\tSize of Character DataType = %d",sizeof(floatType));
    printf("\n\n\t\tSize of Double DataType = %d",sizeof(doubleType));
    printf("\n\n\t\tSize of Long Double DataType = %d",sizeof(longdoubleType));
    printf("\n\n\t*******************************************************************");
    getch();
    return 0;
}
