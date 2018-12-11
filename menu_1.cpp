//Struct_access.cpp
// Zechariah Robbins
// 12/05
// CS14
// Learning to extract into a struct
//
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

struct ListOfLists
{
    int menu[10];
    float price[10];
};

int ReadItem( istream &in,  ListOfLists&p )
{
    if( in >> p.menu >> p.price )
    {
        return SUCCESS;
    }
    return FAILURE;
}

void PrintItem( ostream &out, ListOfLists &p )
{
    out << "The Menu contains" << p.menu << "The price of the items are"
        << p.price << endl;

    return;
}

int main()
{
    ListOfLists inventory[10];

    ifstream fin( "menu_1.txt" );
    inventory[10];
    int ct = 0, i;
    if( !fin )
    {
        cout << "Error opening file!\n" << flush;
        return -1;
    }
    while( ct < 10 && ReadItem( fin, inventory[ct] ) == SUCCESS )
    {
        ct++;
    }
    cout << "We read " << ct << " items" << endl;

    for( i = 0; i < ct; i++ inventory[i] );
        cout << "-------------------------------" << endl;
    }

    fin.close();
    return 0;
