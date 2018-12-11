// IsOdd.cpp
//
// Zechariah Robbins
// 10/25/2018
// CSCI-14 assignment 7
// returns if digit is odd
//
#include <iostream>
#include <string>
using namespace std;

 bool IsOddDigit(char ch)
    {
        if ( ch % 2 == 0)
        {
            ch = false;
        }
        else
        {
            ch = true;
        }
        return ch;
    }


int main()
{
    char chk = 32;

    while(chk <= 126)
    {
        if(IsOddDigit (chk))
        {
            cout << "The character " << chk << " is odd. \n";
        }
        else
        {
            cout << "The character " << chk << " is even. \n";
        }

        chk++;
    }


    return 0;

}
