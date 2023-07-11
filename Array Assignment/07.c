
///Create,Accept,Display Array using Loop - with Macro, Search Given Element in that array and return its Location if found.

#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i = 0, Src = 0, Arr[size];

    printf("\n\n\t********************************************************************");

    for(i = 0; i < size; i++)
    {
        printf("\n\n\t\t\tEnter Element %d = ",i+1);
        scanf("%d",&Arr[i]);
    }

    printf("\n\n\t********************************************************************");

    system("cls");

    printf("\n\n\t********************************************************************");

    printf("\n\n\t\tEnter element to be searched = ");
    scanf("%d",&Src);

    for(i = 0; i < size; i++)
    {
        if(Src == Arr[i])
        {
            break;
        }
    }

    if(i == size)
    {
        printf("\n\n\t\tEntered element not found in given array.");
    }
    else
    {
        printf("\n\n\t\tEntered element found at location = %d",i+1);
    }

    printf("\n\n\t********************************************************************");

    getch();
    return 0;
}
