
#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
    int num;

    cout << "Enter Any Integer Number : ";
    cin>>num;

    (num%2==0)  ?  cout<<num <<"is even"  :  cout<<num  <<"is odd";

    getch();
}
