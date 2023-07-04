
//Program to accept Student Details from user.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0,Fact = 0;

    printf("\n\n\t*************************************************************");

    printf("\n\n\t\tEnter Number to find its Factorial = ");
    scanf("%d",&No);

    Temp = No;
    Fact = 1;

    while(Temp > 0)
    {
        Fact = Fact * Temp;
        Temp--;
    }

    printf("\n\n\t\tFactorial of %d = %d",No,Fact);



    printf("\n\n\t*************************************************************");

    getch();
    return 0;
}
