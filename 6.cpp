#include <iostream>
using namespace std;

// Define a structure to represent complex numbers
struct complex {
    float real;         // Real part of the complex number
    float imaginary;    // Imaginary part of the complex number
};

// Function to add two complex numbers
complex add(complex c1, complex c2) {
    complex temp;
    temp.real = c1.real + c2.real;         // Add real parts
    temp.imaginary = c1.imaginary + c2.imaginary;   // Add imaginary parts
    return temp;   // Return the sum of the two complex numbers
}

// Function to add two integers
int add(int a, int b) {
    return a + b;   // Return the sum of the two integers
}

// Function to concatenate two strings
string add(string s1, string s2) {
    return s1 + s2;   // Return the concatenation of the two strings
}

int main() {
    char c;         // Variable to store the user's choice
    int a, b;       // Variables to store integer inputs
    string d, e;    // Variables to store string inputs
    complex c1, c2, c3;   // Variables to store complex numbers

    // Prompt the user to choose the data type for addition
    cout << "Enter the data type whose addition has to be calculated:(c,i,s):  ";
    cin >> c;

    switch (c) {
        case 'i':
            // If the user chooses integers, prompt for input and perform addition
            cout << "enter integer number 1:";
            cin >> a;
            cout << "enter integer number 2:";
            cin >> b;
            cout << "addition of two integers " << add(a, b);
            break;
        case 's':
            // If the user chooses strings, prompt for input and perform concatenation
            cout << "enter string 1:";
            cin >> d;
            cout << "enter string 2:";
            cin >> e;
            cout << "addition of two strings " << add(d, e);
            break;
        case 'c':
            // If the user chooses complex numbers, prompt for input and perform addition
            cout << "enter real and imaginary parts of first complex number:";
            cin >> c1.real >> c1.imaginary;
            cout << "Enter real and imaginary parts of the second complex number:" << "\n";
            cin >> c2.real >> c2.imaginary;
            cout << "c1 is " << c1.real << " + (" << c1.imaginary << ")i\n";
            cout << "c2 is " << c2.real << " + (" << c2.imaginary << ")i\n";
            // Calculate the sum of the two complex numbers and display the result
            complex sum = add(c1, c2);
            printf("Sum = %.2f + %.2fi\n", sum.real, sum.imaginary);
            break;
        
    }

    return 0;
}
