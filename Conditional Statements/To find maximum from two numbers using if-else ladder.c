
//TO Find maximum from two numbers.

#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0 , No2 = 0;

    printf("\n\n\t*******************************************************");

    printf("\n\n\t\tEnter Value for No1 : ");
    scanf("%d",&No1);

    printf("\n\n\t\tEnter Value for No2 : ");
    scanf("%d",&No2);

    if(No1 == No2)
    {
        printf("\n\t\tGiven Numbers %d & %d are Equal.",No1,No2);
    }
    else if(No1 > No2)
    {
        printf("\n\n\t\tGiven Number %d is Maximum Number.",No1);
    }
    else if(No1 < No2)
    {
        printf("\n\n\t\tGiven Number %d is Maximum Number.",No2);
    }

    printf("\n\n\n\t\tThanks!!!");

    printf("\n\n\t*******************************************************");

    getch();
    return 0;
}
