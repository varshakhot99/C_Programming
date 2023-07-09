#include<stdio.h>
#include<conio.h>

int main()
{
   int j,num,sum=0;

   for(j=0;j<10;j++)

     {
         printf("Enter No = ");
         scanf("%d",&num);
         sum+=num;
     }

printf("final sum:%d",sum);

return 0;

}


