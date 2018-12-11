// lpcvt.cpp
//
// Zechariah Robbins William
// 10/08/2018
// CSCI-14 Lab 8
// Originals and rewrites of loops assigned
//
#include <iostream>

using namespace std;

int main()

{
    int i, n;

    cout << "Enter a positive integer: " << flush;
    cin >> n;
    for ( i = 0; i < n; i++ )
    {
        cout << i << " " << flush;
    }
    cout << endl;

    i = 0;

    cout << "Enter a positive integer: " << flush;
    cin >> n;

    if(n > 0)
    {
         do
         {
             cout << i << " " << flush;
             i++;
         }while(i < n);
         {
         }
    }

    cout << endl;

    i = 0;

    cout << "Enter a positive integer: " << flush;
    cin >> n;

    while( i < n )
    {
        cout << i << " " << flush;
        i++;
    }
    cout << endl;
    cout << "Enter a positive integer: " << flush;
    cin >> n;

    i = 0;

    while( n > 0 )
    {
        cout << n << " ";
        n /= 2;
    }
    cout << endl;
    cout << "Enter a positive integer: " << flush;
    cin >> n;

    if(n > 0)
    {
        do
        {
            cout << n << " ";
            n/=2;
        }while( n > 0);
        {
        }
    }

    cout << endl;
    cout << "Enter a positive integer: " << flush;
    cin >> n;

    for( n; n > 0; n/=2)
    {
        cout << n << " ";
    }
    cout << endl;
    cout << "Enter a positive integer: " << flush;
    cin >> n;

    i = 1;

    if( n > 0 )
    {
        do
        {
            cout << i << " ";
            i *= 2;
        }while( i <= n );
        {
        }
    }

    cout << endl;
    cout << "Enter a positive integer: " << flush;
    cin >> n;

    for( i = 1; i <= n; i *= 2 )
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Enter a positive integer: " << flush;
    cin >> n;

    i = 1;

    while( i <= n )
    {
        cout << i << " ";
        i *= 2;
    }
    cout << endl;

    return 0;
}



