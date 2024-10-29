#include<iostream>
using namespace std;
class hero{
    //properties
    private:
    int health;
    public:
    char level;
    //getter/setter functions
    int gethealth(){
        cout<<"health is "<<health<<endl;
    }
    char getlevel(){
        cout<<"level is "<<level<<endl;
    }
    void sethealth(int h){
        health=h;
    }
    void setlevel(int l){
        level=l;
    }
};
    int main(){
        hero ramesh;
        int h;
        char l;
        cout<<"enter health:";
        cin>>h;
        ramesh.sethealth(h);
        cout<<"enter level:";
        cin>>l;
        ramesh.setlevel(l);
        
        ramesh.gethealth();
        ramesh.getlevel();
       
    }



    
