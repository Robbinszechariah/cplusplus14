//count.cpp
//
//Zechariah Robbins Dennis Nguyen
//09/24/2018
//CSCI-14 Lab 6
//Gets a series of integers from the user stopping at the first entry
//
#include <iostream>
using namespace std;

int main()
{
    int srs, ct=0, sm;
    float avg;

    cout << "Enter a series of integers: " << flush;
    cin >> srs;

    while (srs >= 0)
    {

        sm = sm + srs;
        ct++;
        cout << "Enter a series of integers: " << flush;
        cin >> srs;
    }

    avg = (float)sm/ct;

    cout << "The sum of your series is " << sm << "." << endl;
    cout << "The average of your series is " << avg << "." << endl;
    cout << "The count of your series is " << ct << "." << endl;


    return 0;
}
