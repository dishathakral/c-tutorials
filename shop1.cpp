#include<iostream>
#include<string>
#include<string.h>
using namespace std;

class customer{
    public:
    string cust_name;
    int cust_money;
    int cust_item[10];
    int total;
    customer(){
        cout<<"Enter customer name: ";
        cin>>cust_name;
        cout<<"Enter customer money:";    
        cin>>cust_money;
        }
    

};
class item{
    int item_code;
    string item_name;
    int item_cost;
    string item_brand;
    public:
    item()
    {
            cout<<"Enter item code: ";
            cin>>item_code;
            cout<<"Enter item name: ";
            cin>>item_name;
            cout<<"Enter item cost: ";
            cin>>item_cost;
            cout<<"Enter item brand: ";
            cin>>item_brand;
    }
    void display1(){
       cout<<"----------------------xxx-----------------------\n";
       cout<<"| Item code | Item name | Item cost |Item brand|\n";

    }
    void display(){
        cout<<"| "<<item_code<<" | "<<item_name<<" | "<<item_cost<<" | "<<item_brand<<" | \n";

    }
};
int main(void){
  int n;
  customer cust;
    cout<<"Enter number of elements: ";
    cin>>n;
    item i[n];
    i[0].display1();
    for(int x=0;x<n;x++){
        i[x].display();
    }    

 }