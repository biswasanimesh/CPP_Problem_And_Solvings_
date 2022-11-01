
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
    Student(int x, double y)
    {
        id = x;
        gpa = y;
    }
    void setValue(int x, double y)
    {
        id = x;
        gpa = y;
    }

};

int main()
{

    Student Alam(101,3.67);
    Alam.display();


    Student Suparna(102,3.88);
    Suparna.display();

    getch();
}
