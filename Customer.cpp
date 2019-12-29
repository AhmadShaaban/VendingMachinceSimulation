#include <bits/stdc++.h>
#include "Person.h"
#include "Customer.h"
#include "MyTime.h"

using namespace std;

Customer::Customer()
{
    duration = 10 + (rand() % 230);
    OTime = MyTime(duration);
    ID++;
    currentReceipt = 0;
}

int Customer::getID(){
    return ID;
}

MyTime Customer::getCOT(){
    return OTime;
}

void Customer::setSDur(){
        //time object
}

void Customer::BuyItems(int in,int amount){
        currentReceipt += st.buy(in ,amount);
        //BuyItems: select from the items menu, the items that he will buy
}

double Customer::getTotal(){
        return currentReceipt;
        //GetTotal: returns total price of the receipt.
}

Customer::~Customer(){

}

int Customer:: ID = 1;
