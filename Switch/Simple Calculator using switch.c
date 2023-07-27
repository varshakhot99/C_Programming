///Program to create a simple calculator.

#include<stdio.h>
#include<conio.h>

int main()
{
    char operation;
    int n1, n2;

    printf("\n\t***************************************************************************************");

    printf("\n\n\t\tEnter an operator (+, -, *, /) : ");
    scanf("%c",&operation);

    printf("\n\t***************************************************************************************");

    printf("\n\n\t\tEnter two operands : ");

    printf("\n\n\t\tn1 = ");
    scanf("%d",&n1);

    printf("\n\n\t\tn2 = ");
    scanf("%d",&n2);

    printf("\n\t***************************************************************************************");

    switch(operation)
    {
    case '+' :
        printf("\n\t\t%d + %d = %d",n1, n2, n1+n2);
        break;

    printf("\n\t***************************************************************************************");

    case '-' :
        printf("\n\t\t%d - %d = %d",n1, n2, n1-n2);
        break;

    printf("\n\t***************************************************************************************");

    case '*' :
        printf("\n\t\t%d * %d = %d",n1, n2, n1*n2);
        break;

    printf("\n\t***************************************************************************************");

    case '/' :
        printf("\n\t\t%d / %d = %d",n1, n2, n1/n2);
        break;

    printf("\n\t***************************************************************************************");

    default:
        printf("\n\n\t\tError!!!\n\t\tOperator is not correct.");
    }

    printf("\n\n\t***************************************************************************************");

    return 0;
}
