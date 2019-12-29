#include <bits/stdc++.h>
using namespace std;
#ifndef PERSON_H
#define PERSON_H

class Person
{
    public:
        Person();

    protected:
        string name , address;
        void setname(string x);
        void setaddress(string x);
        string getname();
};

#endif // PERSON_H
