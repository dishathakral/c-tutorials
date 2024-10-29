#include<iostream>
using namespace std;
class item{
    public:
    int item_code;
    string item_name;
    int item_cost;
    int item_quantity;

    public:
    void getdata()
    {
        cout<<"enter the item code:"<<endl;
        cin>>item_code;
        

    }
}