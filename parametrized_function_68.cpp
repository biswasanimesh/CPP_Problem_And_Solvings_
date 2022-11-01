


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

    void setValue(int x, double y)
    {
        id = x;
        gpa = y;
    }

};

int main()
{

    Student Alam,Suparna;

    Alam.setValue(101,3.67);
    Alam.display();


    Suparna.setValue(102,3.88);
    Suparna.display();

    getch();
}
