#include <bits/stdc++.h>
#include "Person.h"
using namespace std;

Person::Person()
{

}

void Person::setname(string x){
    name = x;
}

void Person::setaddress(string x){
    address = x;
}

string Person::getname(){
    return name;
}
