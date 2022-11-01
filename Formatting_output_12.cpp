#include<iostream>
#include<conio.h>

#include<iomanip>
using namespace std;

int main()

{
    float num1,num2;

    cout<<"Enter Two Numbers : ";
    cin>>num1  >>num2;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);

    float sum = num1 + num2;
    cout <<setw(25)<<"Summation is        : "<<sum;
    cout<<endl;


    cout<< noshowpoint;
    float sub = num1 - num2;
    cout <<"Subtriction is      : "<<sub;
    cout<<endl;

    float mul = num1 * num2;
    cout <<setw(25)<<"Multiplication is   : "<<mul;
    cout<<endl;

    double div = (float)num1 / num2;  // Type casting
    cout <<setw(25)<<"Division is         : "<<div;
    cout<<endl;


    //float rem = num1 % num2;
    //cout  <<"Remainder is       : "<<rem;
    //cout << endl;

    getch();
}

