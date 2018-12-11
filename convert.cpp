//convert.cpp
//
//Zechariah Robbins
//09/01/2018
//CSCI-14 Assignment 1
//coverts miles and feet to kilometers
//
#include<iostream>
using namespace std;
int main()
{
    //hold user values
    int miles;
    float feet, kilometer, total_feet, total_meters;
    //prompts use for number of miles
    cout << "Enter miles: " << flush;
    //user inputs miles
    cin >> miles;
    //prompts user for number of feet
    cout << "Enter feet: " << flush;
    //user inputs feet
    cin >> feet;
    //converts miles to feet
    total_feet= miles*5280+feet;
    //converts total feet to meters
    total_meters= total_feet/3.28;
    //converts total meters to kilometer
    kilometer= total_meters/1000;
    //outputs conversion to user
    cout << miles << " miles and " << feet << " feet are equal to "
         << kilometer << " kilometers. " << endl;
    //returns 0 if successful
    return 0;
}
