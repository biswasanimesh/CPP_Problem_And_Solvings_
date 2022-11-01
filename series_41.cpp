
//1+2+3+4+....+n
#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

int main()
{
    int sum = 0,n;

    cout<<"enter the last number : ";
    cin>>n;
    for(int i=1; i<=n; i=i+1)
    {

        sum = sum + pow(i,5);
    }
    cout<<sum;

    getch();
}
