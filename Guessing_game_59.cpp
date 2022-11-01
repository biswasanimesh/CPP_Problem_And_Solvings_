
#include<iostream>
#include<cstdlib>
#include<conio.h>

using namespace std;

int main()

{

    while(1)
    {
        int guessNumber, randomNumber;

        cout<<"enter your guess between 1 to 5 : ";
        cin >> guessNumber;

        randomNumber = 1 + rand()%5;

        if(guessNumber ==randomNumber)
        {
            cout<<  "You have won"<<endl<<endl;
        }
        else
        {
            cout  <<"                          You have lost try again " <<endl;
            cout  <<"                          try again " <<endl;
            cout  << "Random number was : "<<randomNumber<<endl<<endl;
        }
    }

    getch();
}
