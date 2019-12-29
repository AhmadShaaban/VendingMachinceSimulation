#ifndef MYTIME_H
#define MYTIME_H
#include <iomanip>
#include<bits/stdc++.h>
using namespace std;

class MyTime
{
int hours , minutes ;
public:
    MyTime(int addM = 0);
	friend ostream& operator<<(ostream& out,MyTime &t){
        out<< setw(2)<<setfill('0') << t.hours<<':'<<setw(2)<<setfill('0') << t.minutes<<endl;
        return out;
	}
};

#endif // MYTIME_H
