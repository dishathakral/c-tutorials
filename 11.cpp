#include<iostream>
using namespace std;
int main()
{
    int a=100;
    int *ptr=&a;
    int *ptr1;
    ptr1=ptr;
    cout<<"The value of a : "<<a<<endl;
    cout<<"The address of a: "<<ptr<<endl;
    cout<<"The address of ptr:"<<ptr1<<endl;
    cout<<"The address of ptr1:"<<&ptr1<<endl;
    return 0;
}