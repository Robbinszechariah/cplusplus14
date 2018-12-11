//mpg.cpp
//
//Zechariah Robbins Alex Choi
//09/05/2018
//CSCI-14 Lab 3
//Calculate the MPG (miles per gallon) for a tank of gasoline
//
#include <iostream> //get access to input/output streams lib
using namespace std;
int main()
{
    //miles before drive, miles after drive,
    //fuel capacity of vehicle, miles per gallon
    float odeBeg, odeEnd, galFil, mpg;
    //Your beginning miles on odometer
    cout << "What number of miles did your odometer begin at? " << flush;
    //User miles input
    cin >> odeBeg;
    //Your ending miles on odometer
    cout << "what number of miles did your odometer ended at? " << flush;
    //User miles input
    cin >> odeEnd;
    //Your gallons of fuel capacity
    cout << "How many gallons of fuel does your vehicle hold? " << flush;
    //User gallon input
    cin >> galFil;
    //Calculating the inputs
    mpg = (odeEnd - odeBeg)/galFil;
    //Conclusion of this program
    cout << "Your odometer started at " << odeBeg
         << ", and your odometer ended at " << odeEnd
         << ", and your vehicles fuel capacity is "
         << galFil << ", so your vehicles mpg is " << mpg << endl;

         return 0;

}
