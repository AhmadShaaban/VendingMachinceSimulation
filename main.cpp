#include <bits/stdc++.h>
#include "Adminstrator.h"
#include "Person.h"
#include "Customer.h"
#include "MyTime.h"
using namespace std;

int main()
{
    int choise;
    char z;
    Administrator admin;
    admin.init();
    while (true){
        cout<<"Press 1 to Enter as admin, 2 to Enter as customer, and 0 to end the program: ";
        cin>>choise;
        if(!choise)break;
        if (choise==1){
            while (true){
            cout<<"What you want to do:"<<endl;
            cout<<"\t1- ReportAvailableItems"<<endl;
            cout<<"\t2- AddNewItem"<<endl;
            cout<<"\t3- UpdateExistingItem"<<endl;
            cout<<"\t4- ReportTotalRevenue"<<endl;
            cout<<"\t5- DisplayTotalCustomers"<<endl;
            cout<<"\t6- DisplayMaxReceipt"<<endl;

            cin>>choise;
            //////////////////////////////////////////////////
            if (choise==1){
                admin.ReportAvailableItems();
            }
            if (choise==2){
               admin.AddItems();
            }
            if (choise==3){
                cout<<"please enter the name of the product you want to update "<<endl;
                string x; cin>>x;
                cout<<"please enter the the price and the amount of that product"<<endl;
                int a,b;
                cin>>a>>b;
                admin.UpdateExistingItem(x,a,b);
            }
            if (choise==4){
               admin.getTRevenue();
               admin.init();
            }
            if (choise==5){
                cout<<"The currently available customers are "<<admin.TotalCustomers()<<endl;
            }
            if (choise==6){
                cout<<"Max Receipt Value = "<<admin.MaxReceipt()<<endl;
            }
            cout<<"Do you want to do another operation?"<<endl;
            cin>>z;
            if (z=='Y')continue;
            else break;
            }
        }

        else if (choise==2){
            cout<<"Plz enter number of customers:"<<endl;
            int xx;
            cin>>xx;
            admin.increamentcus(xx);
            for(int i=0;i<xx;++i){
                admin.ReportAvailableItems();
                cout<<"PLz select from the following menu the items that Cut"<<admin.getcusID()<<" bought:"<<endl;
                int in , am;
                while(cin>>in>>am){
                    if(!in)break;
                    admin.buy(in,am,admin.ID());
                }
                cout<<"Total Receipt : "<<admin.Totalreciept(admin.ID())<<endl;
            }
        }
    }

    return 0;
}
