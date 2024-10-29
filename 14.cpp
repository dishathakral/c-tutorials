#include <iostream>
#include <string>

using namespace std;

const int MAX_ITEMS = 3;

class Item {
   private:
    int itemcode[MAX_ITEMS]={112,332,2244} ;
    string itemNames[MAX_ITEMS] = {"Laptop", "Smartphone", "Headphones"};
    double itemPrices[MAX_ITEMS] = {80000, 12000, 3000};
    int itemQuantities;

    public:

    void bill(){
    
    cout << "All shop items:" << endl;
    for (int i = 0; i < MAX_ITEMS; ++i) {
        cout << "Name: " <<itemNames[i] << ", Price: " << itemPrices[i],"item code:"<<itemcode[i] <<endl;
    }
 int itemQuantities;
 int n;
 cout<<"enter no. of products"<<endl;
 cin>>n;
 for(int i=0;i<n;i++){

    int itemCode ;
    cout<<" item code" ;
    cin>>itemCode ;
    cout<<"enter quantity";
    cin>> itemQuantities;
    cout << "\nRetrieving item: " << itemCode << endl;
    bool found = false;
    for (int i = 0; i < MAX_ITEMS; ++i) {
        if (itemcode[i] == itemCode) {
            cout << "Item found: ";
            cout << "Name: " <<itemNames[i]<<endl<< " Price: rupees" << itemPrices[i]<<endl<< " Quantity: " << itemQuantities<<endl<<"Total price "<<itemPrices[i]*itemQuantities<< endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Item not found." << endl;
    }
    
 };
    }
};

 int main(){
     Item item;
     item.bill();

 
   
    
}