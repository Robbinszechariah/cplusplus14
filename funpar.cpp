// funpar.cpp
//
// Zechariah Robbins
// 10/25/2018
// CSCI-14 assignment 7
// builds parallelogram using functions
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    GetNRows(n);

    return 0;
}

int GetNRows ( void ) ;
{
    int r;

    do
    {
        cout << "Enter a number of rows(3-23): " << flush;
        cin >> r;

        if(r > 23)
        {
            cout << "That number is to high, try again." << endl;
        }
        if(r < 3)
        {
            cout << "That number is too low, try again." << endl;
        }

    }
    while( r < 3 || r > 23);

    return;
}
