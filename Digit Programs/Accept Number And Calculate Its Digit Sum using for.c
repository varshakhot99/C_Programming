
///Accept Number And Calculate Its Digit Sum using while.

#include<stdio.h>
#include<conio.h>
 int main()
 {
     int No = 0, Temp = 0, dsum = 0;

     printf("\n\n\t\t*****************************************************");

     printf("\n\n\t\t\tEnter a Positive Number = ");
     scanf("%d",&No);

     for(Temp = No; Temp > 0; Temp = Temp / 10)
     {
         dsum += (Temp % 10);
     }

     printf("\n\n\t\t*****************************************************");

     printf("\n\n\t\t\tDigits Sum of %d is = %d",No , dsum);

     printf("\n\n\t\t*****************************************************");


     getch();
     return 0;
 }
