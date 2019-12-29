#include <bits/stdc++.h>
#include "Adminstrator.h"
#include "Person.h"
#include "Customer.h"
#include "MyTime.h"

using namespace std;

void Administrator::ReportAvailableItems(){
    mystock.display();  //display items price amount
}

void Administrator::AddItems(){
    mystock.addNewItem();
}

void Administrator::UpdateExistingItem(string x,int price,int amount){
    mystock.updateExisitedItem(x,price,amount);
}

double Administrator::MaxReceipt(){
    double mx = 0.0;
    for(int i=0;i<sz;++i){
        mx = max(mx , Clist[i].getTotal());
    }
    return mx;
}

void Administrator::init(){
    totalRevenue = 0;
    sz = 0;
}

void Administrator::getTRevenue(){
    cout << "Total Revenue = " << totalRevenue << " LE\n";
    cout << "Order of the customers are: \n";
    for(int i = 0 ;i < sz ;i++){
        MyTime ob;
        ob = Clist[i].getCOT();
        cout << "Cut " << i+1 << ", checkout at ";
        cout << ob;
    }
}
int Administrator::ID(){
    return IDD;
}

int Administrator::getcusID(){
    return IDD++;
}
int Administrator::TotalCustomers(){
    return sz;
}

int Administrator::Totalreciept(int i){
    totalRevenue += Clist[i].getTotal();
    return Clist[i].getTotal();
}
void Administrator::buy(int in,int am,int i){
    Clist[i].BuyItems(in-1,am);
    mystock.editamou(in-1,am);
}

void Administrator::increamentcus(int x){
    sz += x;
}


int Administrator::sz = 0;
int Administrator::IDD = 1;
