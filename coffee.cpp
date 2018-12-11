// coffee.cpp
//
// Zechariah Robbins
// 10/25/2018
// CSCI-14 assignment 8
// returns if digit is odd
//
#include <iostream>
#include <string>
using namespace std;

const float BGL = 1.50;
const float DNSH = 2.25;
const float CFE = 1.25;

float Prompt(int a, int b, int c )
{

    cout << "What would you like to order? " << endl;
    cout << "How many bagels would you like? " << flush;
    cin >> a;
    cout << "How many coffee would you like? " << flush;
    cin >> b;
    cout << "How many danish would you like? " << flush;
    cin >> c;

    return a, b, c;
}
//prompts user for order
void Calc(float line, float sub, float tax, float tot)
{

}
//calculates extended line, sub total, tax, and grand total
void Print()
{

}
//prints full bill info
int main()
{
    int a = 0, b = 0, c = 0;

    Prompt ( a, b, c );

    cout << a << ' ' << b << ' ' << c << endl;
}
