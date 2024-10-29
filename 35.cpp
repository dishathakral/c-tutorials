//function template in function overloading
#include<iostream>
using namespace std;
template<class t>void fun(t &a){
    cout<<"value of a is"<<a<<endl;
}
template<class a,class b>void fun(a &m,b&n){
    cout<<"value of m is"<<m<<endl;
    cout<<"value of n is"<<n<<endl;
}
int main(){
    int a=10;
    int b=11;
    float c=11.98;
    fun(a);
    fun(b);
    fun(a,b);
}