
///Create,Accept,Display Array using loop - with macro,search given element in that array and return its Index If found.

#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
    int i = 0 , Src = 0, num[size];

    printf("\n\n\t************************************************************************************");

    for(i = 0; i < size; i++)
    {
        printf("\n\n\t\tEnter %d Element = ",i+1);
        scanf("%d",&num[i]);
    }

    printf("\n\n\t************************************************************************************");

    printf("\n\n\t\tEnter Element to be searched = ");
    scanf("%d",&Src);

     printf("\n\n\t************************************************************************************");

    for(i = 0; i < size; i++)
    {
        if(num[i] == Src)
        {
            break;
        }
    }
    if(i < size)
    {
        printf("\n\n\t\tEntered element %d is found at index Number %d.",Src,i);
    }
    else
    {
        printf("\n\n\t\tEntered element is not found in any index.");
    }

    printf("\n\n\t************************************************************************************");

    getch();
    return 0;
}
