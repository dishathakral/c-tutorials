//function templates
#include<iostream>
using namespace std;

template<class m,class n>void add(m&a,n&b){
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;
    
}
int main(){
int a=10;
float b=11.44;
add(a,b);
}