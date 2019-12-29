#include "stock.h"
using namespace std;
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <windows.h>
#include <stdio.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);



void stock:: loadstock(){
    ifstream f ("input.txt");
    string x,y,z; int a,b;
    while (f>>x>>z>>a>>b){
        myList[i].setName(x);
        myList[i].setId(currentId++);
        myList[i].setType(z);
        myList[i].setAvailAmount(a);
        myList[i].setPrice(b);
        i++;
    }
}

void stock:: addNewItem(){
    cout<<"Plz enter the item name, type, available units, price:"<<endl;
    string x,y; int a,b;
    cin>>x>>y>>a>>b;
    myList[i].setName(x);
    myList[i].setType(y);
    myList[i].setAvailAmount(a);
    myList[i].setPrice(b);
    myList[i].setId(currentId++);
    i++;
}

void stock:: updateExisitedItem(string x,int amount,int price){
    int j=0;
    for (j=0;j<i;++j){
            if (myList[j].getName()==x)break;
    }
        myList[j].setAvailAmount(amount);
        myList[j].setPrice(price);
        }

void stock::display(){
    cout<<"The available Items are:"<<endl;
    cout<<" "<<setw(6)<<"Item"<<"\t|"<<setw(11)<<"Type"<<"\t|"<<setw(10)<<"Units"<<"\t|"<<setw(10)<<"Price"<<"\t|"<<endl;
    for (int j=0;j<i;++j){
        if (myList[j].getAvailAmount() < 5){
            SetConsoleTextAttribute(hConsole, 12);
        }
        cout<<j+1<<setw(10)<<myList[j].getName()<<setw(13)<<myList[j].getType()<<setw(10)<<myList[j].getAvailAmount()<<setw(16)<<myList[j].getPrice()<<endl;
        SetConsoleTextAttribute(hConsole, 15);
    }
}

double stock::buy(int in,int am){
    return myList[in].getPrice() * am;
}



