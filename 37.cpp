//class templates various parameters
#include<iostream>
using namespace std;
 template<class a,class b>

 class A{
    a x;
    b y;
    public:
    A(a x,b y){
        this ->x=x;
         this ->y=y;
    }
    void add(){
        cout<<"addition is"<<x+y;

    }

 };
 int main(){
    A<int,float> b(11,12.35);
    b.add();
    
 }