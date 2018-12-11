//plgct.cpp
//
//Zechariah Robbins
//10/3/2018
//CSCI-14 assignment 6
//create a parallelogram according to user input
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int r, ct, tp;

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
    {
    }

    if(r%2 ==0)
    {
        r++;
    }

    while(ct <= r)
    {
        if


    }

