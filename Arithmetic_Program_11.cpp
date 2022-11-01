#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
    int num1,num2;

   cout<<"Enter Two Numbers : ";
   cin>>num1  >>num2;

int sum = num1 + num2;
cout <<"Summation is        : "<<sum;
cout<<endl;

int sub = num1 - num2;
cout <<"Subtriction is      : "<<sub;
cout<<endl;

int mul = num1 * num2;
cout <<"Multiplication is   : "<<mul;
cout<<endl;

double div = (float)num1 / num2;  // Type casting
cout <<"Division is         : "<<div;
cout<<endl;



    getch();
}
