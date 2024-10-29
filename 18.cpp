#include<iostream>
using namespace std;

class complex{
    float real,imaginary;
    public:
    complex();
    complex(float r,float img){
        real=r;
        imaginary=img;

    }
    void displaydata();
    void add(complex,complex);
    void subtract()
}