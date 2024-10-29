#include<iostream>
using namespace std;
struct complex{
    float real;
    float imaginary;
};
struct complex add(struct complex c1,struct complex c2){
 struct complex temp;
 temp.real=c1.real+c2.real;
 temp.imaginary=c1.imaginary+c2.imaginary;
 return temp;
}
struct complex subtract(struct complex c1,struct complex c2){
 struct complex temp;
 temp.real=c1.real-c2.real;
 temp.imaginary=c1.imaginary-c2.imaginary;
 return temp;
}
struct complex multiply(struct complex c1,struct complex c2){
    struct complex temp;
    temp.real=c1.real*c2.real-c1.imaginary*c2.imaginary;
    temp.imaginary=c1.real*c2.imaginary-c1.imaginary*c2.real;
}
int main(){
    struct complex c1,c2,sum,diff,product;
    cout<<"enter real and  imaginary parts of first complex number:"<<"\n";
    cin>>c1.real>>c1.imaginary;
    cout<<"Enter real and imaginary parts of the second complex number:"<<"\n";
    cin>>c2.real>>c2.imaginary;

    
    sum = add(c1, c2);
    product = multiply(c1,c2);
    diff = subtract(c1,c2);
    
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imaginary);
    printf("product = %.2f + %.2fi\n", product.real, product.imaginary);
    printf("diff = %.2f + %.2fi\n", diff.real, diff.imaginary);
    return 0;
}
