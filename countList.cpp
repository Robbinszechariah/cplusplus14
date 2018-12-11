//countList.cpp
//
//Zechariah Robbins Dennis Nguyen
//09/24/2018
//CSCI-14 Lab 6
//Gets two integers and counts from one to the other
//
#include <iostream>
using namespace std;

int main()
{
    int bn, ed;

    cout << "Enter one integer: " << flush;
    cin >> bn;
    cout << "Enter a second integer: " << flush;
    cin >> ed;
    cout << bn << endl;

    while(bn != ed)
    {
        if(bn < ed)
        {
            bn++;
            cout << bn << endl;
        }
        else if(bn > ed)
        {
            bn--;
            cout << bn << endl;
        }

    }

    return 0;
}
