using namespace std;

#include<iostream>
#include<conio.h>

void Address(int *Ptr);

int main()
{
    int No = 10;

    cout<<No<<endl;

    Address(&No);

    cout<<No<<endl;

    getch();
    return 0;
}

void Address(int *Ptr)
{
    cout<<"Inside Function...."<<endl;
    *Ptr++;
}
