//phone.cpp
//
//Zechariah Robbins
//09/13/2018
//CSCI-14 Assignment 4
//Takes a single character and prints the corresponding digit on the
//touchtone telephone keypad
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char letter;
    cout << "Enter a single capital letter from the alphabet: " << flush;
    letter = cin.get();
    //Checks which/whether(a)digit corresponds to the capital letter given.
    if(letter >= 'A' && letter <= 'C')
    {
        cout << "The character " << letter << " corresponds to the digit 2."
             << endl;
    }
    else if(letter >= 'D' && letter <= 'F')
    {
        cout << "The character " << letter << " corresponds to the digit 3."
             << endl;
    }
    else if(letter >= 'G' && letter <= 'I')
    {
        cout << "The character " << letter << " corresponds to the digit 4."
             << endl;
    }
    else if(letter >= 'J' && letter <= 'L')
    {
        cout << "The character " << letter << " corresponds to the digit 5."
             << endl;
    }
    else if(letter >= 'M' && letter <= 'O')
    {
        cout << "The character " << letter << " corresponds to the digit 6."
             << endl;
    }
    else if(letter == 'P' || letter == 'R' || letter == 'S')
    {
        cout << "The character " << letter << " corresponds to the digit 7."
             << endl;
    }
    else if(letter >= 'T' && letter <= 'V')
    {
        cout << "The character " << letter << " corresponds to the digit 8."
             << endl;
    }
    else if(letter >= 'W' && letter <= 'Y')
    {
        cout << "The character " << letter << " corresponds to the digit 9."
             << endl;
    }
    else if(letter == 'Q' || letter == 'Z')
    {
        cout << "The character " << letter << " has no corresponding digit."
             << endl;
    }
    else
    {
        cout <<  "That is not a capital letter" << endl;
    }

    return 0;



}
