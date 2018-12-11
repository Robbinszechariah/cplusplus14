// How_pow_works
//
// 09/25/2018
//
// How_pow_works
//
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// calculate and return x to the p power
// assume 0 to the 0 is 1
double Power (double x, int p)
{
    double t = 1.0;
    int i, stopat = p >= 0 ? p : -p;
    // By starting with t == 1.0, you don't need a separate test for
    // 'is the power p 0' before the loop. Instead of multiplying by
    // itself for a total of p factors, multiply 1.0 by x p times
    for(i = 0; i < stopat; i++)
    {
        t *= x;
    }
    // negative power? Return reciprocal
    return p >= 0 ? t : 1.0 / t;
}

int main()
{
    double x, y;
    int p;
    char more;

    do
    {
        cout << "Enter x: "
    }
}
