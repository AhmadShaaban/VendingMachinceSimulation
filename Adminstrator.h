#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "stock.h"
#include "Customer.h"


class Administrator
{
    public:
        Administrator(){

        }
        Administrator(int c);
        void ReportAvailableItems();
        void AddItems();
        void UpdateExistingItem(string x,int price,int amount);
        void increamentcus(int x);
        int TotalCustomers();
        double MaxReceipt();
        void getTRevenue();
        int getcusID();
        int ID();
        void init();
        int Totalreciept(int i);
        void buy(int in,int am,int i);

    private:
        double totalRevenue = 0;
        stock mystock;
        Customer Clist[101];
        static int sz;
        static int IDD;
};

#endif // ADMINISTRATOR_H
