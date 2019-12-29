#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "stock.h"
#include "Time.h"
#include "Person.h"
#include"MyTime.h"

class Customer : public Person
{
    public:
        Customer();
        string ItemsNames[101];
        int ItemsAmount[101];
        int sz = 0;
        int getID();
        double getSDur();
        MyTime getCOT();
        void setArrivalTime();
        void setSDur();
        void BuyItems(int in,int amount);    //stock - items
        double getTotal();
        ~Customer();

    private:
        static int ID;
        MyTime ATime;
        MyTime OTime;
        int duration;
        double ShoppingDuration;
        stock st;
        double currentReceipt = 0;
};

#endif // CUSTOMER_H
