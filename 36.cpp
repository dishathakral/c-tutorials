//class templates
#include<iostream>
using namespace std;
template<class t>
class A{
    t x;
    t y;
    public:
    A(t x,t y){
        this ->x=x;
         this ->y=y;

    }
    void add(){
    cout<<"value is a+b "<<x+y;
    }


};
int main(){
    A <int> b(11,12);
    b.add();
    
}
