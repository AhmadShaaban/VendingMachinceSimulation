#include "MyTime.h"

MyTime::MyTime(int addM)
{
    time_t now = time(0);
    char* dt = ctime(&now);
    sscanf(dt ,"%*s%*s%*d%2d%*c%2d",&hours , &minutes);
    addM += minutes;
    hours += addM / 60;
    minutes = addM % 60;
    if(hours >= 24)
        hours -= 24;
}
