//sizelab2.cpp
//
//Zechariah Robbins Aerpati Ailaiti
//08/29/2018
//CSCI-14 Lab 2
//Show the size of a data type
//
#include <iostream> //get access to input/output streams lib
using namespace std;
int main()
{
    cout <<"Length for char data type is " << sizeof( char ) <<" byte." << endl;
    cout <<"Length for short data type is " <<sizeof( short )<<" bytes."<< endl;
    cout <<"Length for int data type is " <<sizeof( int ) <<" bytes."<< endl;
    cout <<"Length for long data type is " <<sizeof( long ) <<" bytes."<< endl;
    cout <<"Length for long long data type is " <<sizeof( long long ) <<" bytes."<< endl;
    cout <<"Length for float data type is " <<sizeof( float ) <<" bytes."<< endl;
    cout <<"Length for double data type is " <<sizeof( double ) <<" bytes."<< endl;
    cout <<"Length for long double data type is " <<sizeof( long double ) <<" bytes."<< endl;
    cout <<"Length for boolean data type is " <<sizeof( bool ) <<" byte."<< endl;

    return 0;
}




