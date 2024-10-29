#include<iostream>
using namespace std;

// Define a structure for complex numbers
struct complex{
    float real; // Real part of the complex number
    float imaginary; // Imaginary part of the complex number
};

// Function to add two complex numbers
struct complex add(struct complex c1, struct complex c2){
    struct complex temp;
    temp.real = c1.real + c2.real; // Add the real parts
    temp.imaginary = c1.imaginary + c2.imaginary; // Add the imaginary parts
    return temp;
}

// Function to subtract two complex numbers
struct complex subtract(struct complex c1, struct complex c2){
    struct complex temp;
    temp.real = c1.real - c2.real; // Subtract the real parts
    temp.imaginary = c1.imaginary - c2.imaginary; // Subtract the imaginary parts
    return temp;
}

// Function to multiply two complex numbers
struct complex multiply(struct complex c1, struct complex c2){
    struct complex temp;
    // Perform complex multiplication
    temp.real = c1.real * c2.real - c1.imaginary * c2.imaginary; // Real part
    temp.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real; // Imaginary part
    return temp;
}

int main(){
    struct complex c1, c2, sum, diff, product;

    // Input for the first complex number
    cout << "Enter real and imaginary parts of first complex number:" << endl;
    cin >> c1.real >> c1.imaginary;

    // Input for the second complex number
    cout << "Enter real and imaginary parts of the second complex number:" << endl;
    cin >> c2.real >> c2.imaginary;

    // Calculate the sum, difference, and product of the complex numbers
    sum = add(c1, c2);
    product = multiply(c1, c2);
    diff = subtract(c1, c2);
    
    // Output the results
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imaginary);
    printf("Product = %.2f + %.2fi\n", product.real, product.imaginary);
    printf("Difference = %.2f + %.2fi\n", diff.real, diff.imaginary);

    return 0;
}
