#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex() : real(0), imag(0) {}

    Complex(float r, float i) : real(r), imag(i) {}

    Complex operator+(const Complex& c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        cout << "Result: " << real << " + " << imag << "i" << endl;
    }

    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
};

int main() {
    Complex num1, num2;
    
    cout << "Enter the first complex number: " << endl;
    num1.input();
    
    cout << "Enter the second complex number: " << endl;
    num2.input();
    
    Complex sum = num1 + num2;
    sum.display();
    
    return 0;
}