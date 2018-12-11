//
// ascii.cpp
//
//Zechariah Robbins
//09/27/2018
//CSCI-14 Assignment 5
//Prints all ascii characters
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char asc = ' ';
    int ct = 0;
    while(asc <= '~')
    {
        if(ct < 15)
        {
            cout << asc << ' ' << flush;
            ct++;
        }
        else
        {
            cout << asc << endl;
            ct = 0;
        }
        asc++;
    }
    return 0;
}
