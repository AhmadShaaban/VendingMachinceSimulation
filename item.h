#ifndef ITEM_H
#define ITEM_H
#include<string>
#include <iostream>
using namespace std;

class item
{
private:
    string Name;
    int Id;
    string type;
    int AvailAmount;
    int Price;
public:
        item();
        item(string x,string y, int a, int b){
            Name=x;
            type=y;
            AvailAmount=a;
            Price=b;
        }
        //setters
        void setName(string x){Name=x;}
        void setId(int x){Id=x;}
        void setType(string x){type=x;}
        void setAvailAmount(int x){
            AvailAmount = x;
        }
        void setPrice(int x){Price=x;}
        //getters
        string getName(){return Name;}
        int getId(){return Id;}
        string getType(){return type;}
        int getAvailAmount(){return AvailAmount;}
        int getPrice(){return Price;}



};

#endif // ITEM_H
