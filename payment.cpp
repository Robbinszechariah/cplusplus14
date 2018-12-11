//payment.cpp
//
//Zechariah Robbins
//09/27/2018
//CSCI-14 Assignment 5
//Prints your pay per day in row worked and total pay
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int days, ct = 1, est = 1;
    double pay = 0.01f;

    cout << "How many days did you work? " << flush;
    cin >> days;

    if(days == 0)
    {
        pay *= days;
        cout << "Total pay: $" << pay << flush;
    }
    if(days > 0)
    {
        while(ct <= days)
        {
        cout << "Day " << ct << " you would make $" << est << endl;
        est *= 2;
        pay *= 2;
        ++ct;
        }

    cout << "Total pay: $" << fixed << showpoint << setprecision(2) << pay << endl;
    }

    return 0;
}

