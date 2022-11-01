
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

    Student()
    {
        cout << "Default construstor"<<endl;

    }
};

int main()
{


Student ob;
    Student Alam(101,3.67);
    Alam.display();


    Student Suparna(102,3.88);
    Suparna.display();

    getch();
}
