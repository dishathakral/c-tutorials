// PROGRAM TO CREATE A BILLING SYSTEM FOR A DEPARTMENTAL STORE
#include <bits/stdc++.h>
using namespace std;

int GrandTotal=0;  //GLOBAL VARIABLE TO MAINTAIN GRANTOTAL COUNT

class item{        //CLASS NAMED ITEM TO STORE ITEM DETAILS
    int code;
    string name;
    float cost;
    public:
        friend class choice;    //USING CONCEPT OF FRIEND FUNCTION
        void getdata(int count);
        void display(int Sno);
};

class choice{   //CLASS NAMED CHOICE TO STORE CHOICES OF CUSTOMER
    int Sno;
    int quantity;
    public:
        void getdata(){     //MEMBER FUNCTION TO INPUT DATA
            cout<<endl<<"Enter S.No of the product: ";
            cin>>Sno;

            cout<<"Enter Quanity you want to buy: ";
            cin>>quantity;            
        }   

        // MEMBER FUNCTION TO RETURN SNO
        int returnSno(){ return Sno; }  
        // MEMBER FUNCTION TO RETURN QUANTITY
        int returnQuantity(){ return quantity; }

        // MEMBER FUNCTION TO DISPLAY CUSTOMER DATA/BILL
        void displayCustData(item obj, int Sno){
            cout<<left<<setw(10)<<setfill(' ')<<Sno+1;
            cout<<left<<setw(15)<<setfill(' ')<<obj.code;
            cout<<left<<setw(15)<<setfill(' ')<<obj.name;
            cout<<left<<setw(15)<<setfill(' ')<<obj.cost;
            cout<<left<<setw(15)<<setfill(' ')<<quantity;
            cout<<left<<setw(15)<<setfill(' ')<<obj.cost*quantity;
            GrandTotal += obj.cost*quantity;
            cout<<endl;
        }
};

void item::getdata(int count){  //MEMBER FUNCTION TO INPUT DATA
    cout<<endl;
    cout<<"For Product "<<count+1<<endl;
    cout<<"Enter item code: ";
    cin>>code;
    
    cout<<"Enter item name: ";
    cin>>name;
    
    cout<<"Enter item cost: ";
    cin>>cost;
}

void item::display(int Sno){   //MEMBER FUNCTION TO DISPLAY DATA
    cout<<left<<setw(10)<<setfill(' ')<<Sno+1;
    cout<<left<<setw(15)<<setfill(' ')<<code;
    cout<<left<<setw(15)<<setfill(' ')<<name;
    cout<<left<<setw(15)<<setfill(' ')<<cost;
    cout<<endl;
}

int main(){

    cout<<"** SHOP OWNER INTERFACE **"<<endl;

    int n;
    cout<<endl<<"Enter no. of products: ";
    cin>>n;
    item items[n];

    // USING LOOPS TO STORE SHOP OWNER'S INPUT
    for(int i=0; i<n; i++){
        items[i].getdata(i);
    }

    cout<<"__________________"<<endl;
    cout<<left<<setw(10)<<setfill(' ')<<"S.No";
    cout<<left<<setw(15)<<setfill(' ')<<"Code";
    cout<<left<<setw(15)<<setfill(' ')<<"Name";
    cout<<left<<setw(15)<<setfill(' ')<<"Cost"<<endl;
    cout<<"__________________"<<endl;

    for(int i=0; i<n; i++){         // USING LOOPS TO DISPLAY DATA
        items[i].display(i);
    }

    cout<<endl<<"** CUSTOMER INTERFACE **"<<endl<<endl;

    cout<<"Enter no. of products you want to buy: ";
    int num;
    cin>>num;

    choice choices[num];
    for(int i=0; i<num; i++){   // USING LOOPS TO STORE CUSTOMER'S CHOICES
        choices[i].getdata();
    }
    
    cout<<"__________________________"<<endl;
    cout<<left<<setw(10)<<setfill(' ')<<"S.No";
    cout<<left<<setw(15)<<setfill(' ')<<"Code";
    cout<<left<<setw(15)<<setfill(' ')<<"Name";
    cout<<left<<setw(15)<<setfill(' ')<<"Cost";
    cout<<left<<setw(15)<<setfill(' ')<<"Quantity";
    cout<<left<<setw(15)<<setfill(' ')<<"Total"<<endl;
    cout<<"__________________________"<<endl;

    // USING LOOPS TO DISPLAY BILL
    for(int i=0; i<num; i++){
        choices[i].displayCustData(items[choices[i].returnSno()-1] , i);
    }
    
    cout<<"__________________________"<<endl;
    cout<<left<<setw(70-13)<<(' ');
    cout<<"Grand Total: "<<GrandTotal;    //DISPLAYING GRAND TOTAL AT THE END

    return 0;
}
