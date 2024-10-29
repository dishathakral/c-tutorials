#include<iostream>
using namespace std;

int sum (int a, int b)
{
    cout<<"The sum is:"<<endl;
    return a+b;
}
void sum(float a, float b)
{
    cout<<"The sum is:"<<endl;
    float c = a+b;
    cout<<c;
}
int volume(int r, int h)
{
    cout<<"The volume is"<<endl;
    return 1.3*r*r*h;
}
int main()
{
    cout<<sum(4.5f,3)<<endl;
    cout<<sum(4,7)<<endl;
    cout<<volume(3,4);
    return 0;
}