// Fig. 19.3: PhoneNumber.h
// PhoneNumber class definition
#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>
using namespace std;

class PhoneNumber
{
     ostream &operator<<( ostream &, const PhoneNumber & );
     istream &operator>>( istream &, PhoneNumber & );
    private:
        string areaCode; // 3-digit area code
        string exchange; // 3-digit exchange
        string line; // 4-digit line
}; // end class PhoneNumber
#endif