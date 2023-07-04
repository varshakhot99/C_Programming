
//Program to accept Student Details from user.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , Temp = 0;
    long long int Fact = 0;

    printf("\n\n\t*************************************************************");

    printf("\n\n\t\tEnter Number to print its Factorial = ");
    scanf("%d",&No);

    for(Temp = No , Fact = 1 ; Temp > 0 ; Fact *= Temp , Temp--);

    printf("\n\n\t\tFactorial of %d = %lld.",No,Fact);

    printf("\n\n\t*************************************************************");

    getch();
    return 0;
}
