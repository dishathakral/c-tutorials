#include<iostream>
using namespace std;
//operator overloading
class start{
    int x;
    int y;
    int z;
    
    public:
    void getdata(int a, int b,int c);
    void display(void);
    void operator-(); // no parameters are required
};
    void start :: getdata(int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }