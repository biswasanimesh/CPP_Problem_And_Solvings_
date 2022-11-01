

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    int marks[5];
    //for input;
    for (int i=0; i<5; i++)

    {
        cout  <<  "Marks for student "  << i+1<<" = " ;
        cin  >>  marks[i];
    }
    // for output;

    cout << endl;
    cout <<  "Marks are here : ";
    for (int i= 0; i<5; i++)
    {
        cout << marks[i]  <<  " ";
    }

    cout << endl;
    getch();
}
