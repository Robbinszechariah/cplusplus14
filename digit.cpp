//phone.cpp
//
//Zechariah Robbins
//09/13/2018
//CSCI-14 Assignment 4
//Takes a single character and prints the corresponding digit on the
//touchtone telephone keypad
//
#include <iostream>
using namespace std;

int main()
{
    char letter;
    cout << "Enter a single capital letter from the alphabet: " << flush;
    cin >> letter;

    if(letter = A'||'B'||'C')
    {
        cout << "The character " << letter << " corresponds to the number 2."
             << endl;
    }
    else if(letter = 'D'||'E'||'F')
    {
        cout << "The character " << letter << " corresponds to the number 3."
             << endl;
    }
    else if(letter = 'G'||'H'||'I')
    {
        cout << "The character " << letter << " corresponds to the number 4."
             << endl;
    }
    else if(letter = 'J'||'K'||'L')
    {
        cout << "The character " << letter << " corresponds to the number 5."
             << endl;
    }
    else if(letter = 'M'||'N'||'O')
    {
        cout << "The character " << letter << " corresponds to the number 6."
             << endl;
    }
    else if(letter = 'P'||'R'||'S')
    {
        cout << "The character " << letter << " corresponds to the number 7."
             << endl;
    }
    else if(letter = 'T'||'U'||'V')
    {
        cout << "The character " << letter << " corresponds to the number 8."
             << endl;
    }
    else if(letter = 'W'||'X'||'Y')
    {
        cout << "The character " << letter << " corresponds to the number 9."
             << endl;
    }
    else if(letter = 'Q'||'Z')
    {
        cout << "The character " << letter << " has no corresponding digit."
             << endl;
    }
    else
    {
        cout <<  "that's not a capital letter" << endl;
    }



}
