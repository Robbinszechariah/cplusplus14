// askfifty.cpp
//
// 11/05
//
// asks user for exactly 50 integers, print largest and smallest sum and
// floating point average of the entries
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>

using namespace std;

void exchange( int &a, int &b )
{
    int t = a;
    a = b;
    b = t;
    return;
}
// exchanges two addresses values
void printIt( int a[], int n )
{
    for( int i = 0; i < n; i++ )
    {
        cout << a[i];
        if( i == n-1 )
        {
            cout << endl;
        }
        else
        {
            cout << ' ' << flush;
        }
    }
    return;
}
// prints the array
void RippleSort( int a[], int n )
{
    int i, j;
    for( i = 0; i < n-1; i++ )
    {
        for( j = i+1; j < n; j++ )
        {
            if( a[i] > a[j] )
            {
                exchange( a[i], a[j] );
            }
        }
    }
    return;
}
// sorts the array using ripple sort
int main()
{
    int a[3], an = 0, lg = a[0], sm = a[0], sum = 0;

    double avg;

    ofstream fout("ask50.txt");
    ifstream fin;
    if( !fout )
    {
        cout << "ask50 file open failed! \n" << flush;
        return -1;
    }

    cout << "Enter 50 integers: " << flush;

    while(an < 3)
    {
        fin >> a[an];
        an++;
    }



    while(an < 3)
    {
        if (a[an] > lg)
        {
            lg = a[an];
        }
        if (a[an] < sm)
        {
            sm = a[an];
        }

        an++;
    }

    an = 0;

    while(an < 3 )
    {
        sum += a[an];

        an++;
    }

    avg = sum/3.0;

    an = 0;

    while(an < 3)
    {
        cout << a[an] << flush;

        an++;
    }

    cout << endl;

    an = 0;

    cout << "Your largest number in the sequence is " << lg << endl;
    cout << "Your smallest number in the sequence is " << sm << endl;
    cout << "Your sequence sum is " << sum << endl;
    cout << "Your average number in the sequence is " << avg << endl;

    cout << "Your entered order was: " << flush;

    while(an < 3)
    {
        cout << a[an] << setw(10) << ' ' << flush;

        an++;
    }
    cout << endl;
    RippleSort( a, 3 );

    printIt( a, 3 );

    return 0;

}
