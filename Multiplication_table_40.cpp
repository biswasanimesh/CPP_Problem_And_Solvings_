
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num;

    cout << "enter any integer : ";
    cin>>num;

    for(int i=1; i<=10; i++)
    {
        cout << num << "x  "<< " = " << (num*i)<<endl;
    }

    getch();
}
