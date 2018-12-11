//time.cpp
//
//Zechariah Robbins Anantvir Singh
//09/10/2018
//CSCI-14 Lab 4
///Display the users overall seconds, minutes, and hours
//
#include <iostream> //get access to input/output streams lib
using namespace std;
int main()
{
    //these are your time variables
    int seconds, minutes, hours, seconds2, seconds3, minutes2;
    //if seconds is less than 60 output seconds
    cout << "How many seconds? " << flush;
    cin >> seconds;
    cout << "That is " << seconds << " seconds." << endl;
    //if seconds are greater than or equal to 60 output minutes and seconds
    if(seconds >= 60)
    {
        minutes = seconds/60;
        seconds2 = seconds%60;

        cout << "That is " << minutes << " minutes and " << seconds2 << " seconds." << endl;
    }
    //if seconds is greater than or equal to 3600 output total hours, minutes, and seconds
    if(seconds >=3600)
    {

        hours = minutes/60;
        minutes2 = minutes%60;
        seconds3 = minutes2%60;

        cout << "That is " << hours << " hours, " << minutes2 << " minutes, and " << seconds3 << " seconds." << endl;


    }

    return 0;
}
