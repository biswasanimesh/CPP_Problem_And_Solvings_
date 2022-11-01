
#include<iostream>
#include<conio.h>

using namespace std;

void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);

int main()
{

    addition        (10,20);
    subtraction     (20,5);
    multiplication  (10,3);
    division        (10,2);

    cout<<"All function has called.";

    getch();
}
void addition(int a,int b)
{
    int sum = a+b;
    cout<<"sum = "<<sum <<endl;
}
void subtraction(int a,int b)
{
    int result = a-b;
    cout<<"subtraction = "<<result <<endl;
}
void multiplication(int a,int b)
{
    int result = a*b;
    cout<<"multiplication = "<<result <<endl;
}
void dividion(int a,int b)
{
     int result =(float)a/b;
  cout <<"division = "<<result <<endl;
}


