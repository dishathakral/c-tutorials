#include<iostream>
#include<cstdio>
using namespace std;
struct complex{
    float real;
    float imaginary;
};
 struct complex add( complex c1, complex c2){
  complex temp;
 temp.real=c1.real+c2.real;
 temp.imaginary=c1.imaginary+c2.imaginary;
 return temp;
}
int add(int a,int b){
    return a+b;
}
string add(string s1,string s2){
return s1+s2;
}
int main(){
    char c;
    int a,b;
    string d,e;
    struct complex c1,c2,c3;
    cout<<"Enter the data type whose addition has to be calculated:(c,i,s):  ";
    cin>>c;
    switch(c){
    case 'i':
    cout<<"enter integer number 1:";
    cin>>a;
    cout<<"enter integer number 2:";
    cin>>b;
    cout<<"addition of two integers "<<add(a,b);
    break;
    case 's':
    cout<<"enter string 1:";
    cin>>d;
    cout<<"enter string 2:";
    cin>>e;
    cout<<"addition of two strings "<<add(d,e);
    break;
    case 'c':
    cout<<"enter real and  imaginary parts of first complex number:";
    cin>>c1.real>>c1.imaginary;
    cout<<"Enter real and imaginary parts of the second complex number:"<<"\n";
    cin>>c2.real>>c2.imaginary;
    cout<<"c1 is "<<c1.real<<" + ("<<c1.imaginary<<")i\n";
    cout<<"c2 is "<<c2.real<<" + ("<<c2.imaginary<<")i\n";
    struct complex sum=add(c1,c2);
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imaginary);

    break;
    default:
            cout << "Invalid data type entered!" << endl;
    break;        
    
    }
}





