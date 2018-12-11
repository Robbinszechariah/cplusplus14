//triangle.cpp
//
//Zechariah Robbins
//09/13/2018
//CSCI-14 Assignment 3
//Determines if the sides make a right triangle
//
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, rgtChk = 0;

    cout << "Enter side a: " << flush;
     cin >> a;
    cout << "Enter side b: " << flush;
     cin >> b;
    cout << "Enter side c: " << flush;
     cin >> c;

    //These three if statements check if the sides form a right triangle
    if (a*a + b*b == c*c)
    {
        cout << "This is a right triangle." << endl;
        rgtChk++;
    }

    if (a*a + c*c == b*b)
    {
        cout << "This is a right triangle." << endl;
        rgtChk++;
    }

    if (c*c + b*b == a*a)
    {
        cout << "This is a right triangle." << endl;
        rgtChk++;
    }
    //This statement checks if any of the prior if statement triggered
    if (rgtChk == 0)

    {
        cout << "This is not a right triangle." << endl;
    }


    return 0;
}
