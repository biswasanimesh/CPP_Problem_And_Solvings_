

#include<iostream>
#include<conio.h>

using namespace std;


void square(int n)
{
    int result = n*n;
    cout  << "square is "<<" = ";
    cout  <<  result<<endl;
}

int main()
{

    square(5);
    square(6);
    square(7);

    getch();
}
