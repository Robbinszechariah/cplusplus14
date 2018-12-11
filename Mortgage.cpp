//mortgage.cpp
//
//Zechariah Robbins
//09/10/2018
//CSCI-14 Assignment 2
//Determines your mortgage
//
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{

    double interest, mid, midYear, midSolve, loan,
           payment, topHalf, botHalf, years;
    //users loan
    cout << "Enter loan amount: " << flush;
    cin  >> loan;
    //Users annual interest rate
    cout << "Enter annual interest rate in"
            " percentage amounts (e.g .02 for 2%): "
         << flush;
    cin  >> interest;
    //Users years of loan payment
    cout << "Enter number of years: " << flush;
    cin  >> years;
    //solves 1+r/12
    mid = (1+interest/12);
    //sets years times 12 "months"
    midYear = 12 * years;
    //solves for both 1+r/12 to the power of 12 times years
    midSolve = pow(mid, midYear);
    //solves numerator
    topHalf = loan * midSolve * (interest/12);
    //solves denominator
    botHalf = midSolve -1;
    //solves for payment
    payment = topHalf/botHalf;

    cout << "Your monthly loan payment would be $" << showpoint
         << fixed << setprecision(2) << payment << endl;

    return 0;
}

