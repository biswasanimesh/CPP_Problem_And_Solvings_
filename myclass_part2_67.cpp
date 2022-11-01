

#include<iostream>
#include<conio.h>

using namespace std;

class Student
{

public :
    int id;
    double gpa;

    void display()
    {
        cout <<id  << "  "<<endl<<gpa<<endl<<endl;
    }

};

int main()
{

    Student Alam,Suparna;;

    Alam.id = 101;
    Alam.gpa=3.67;
    Alam.display();



    Suparna.id = 102;
    Suparna.gpa= 3.88;
    Suparna.display();

    getch();
}
