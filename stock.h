#ifndef STOCK_H
#define STOCK_H
#include "item.h"
#include <string>
#include <fstream>
using namespace std;
class stock
{
private:
    item myList[100];
    int i=0;
    int currentId=1;
public:

    stock(){
       loadstock();
    }

    void editamou(int in,int am){
        int acc = myList[in].getAvailAmount() - am;
        myList[in].setAvailAmount(acc);
    }
    void loadstock();

    void addNewItem();

    void updateExisitedItem(string x,int a,int b);

    void display();

    double buy(int in,int am);


};

#endif // STOCK_H
