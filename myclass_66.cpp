
#include<iostream>
#include<conio.h>

using namespace std;

class Student
{

public :
    int id;
    double gpa;


};

int main()
{

    Student Alam,Suparna;;

    Alam.id = 101;
    Alam.gpa=3.67;
    cout << Alam.id  << "  "<<endl<<  Alam.gpa<<endl<<endl;



    Suparna.id = 102;
    Suparna.gpa= 3.88;
    cout << Suparna.id  << "  "<<endl<<  Suparna.gpa;


    getch();
}
