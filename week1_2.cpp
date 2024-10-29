//to generate n terms of fibonacci series
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n;
    cout<<"enter first and second element of fibonacci series:";
    cin>>a;
    cin>>b;
    cout<<"enter number of terms of fibonacci series:";
    cin>>n;
    // Handle the case where n is less than or equal to 0
    if (n <= 0) {
        cout << "The number of terms must be a positive integer." << endl;
        return 0;
    }

    // Output the first term if n >= 1
    if (n >= 1) {
        cout << a;
        cout<<endl;
    }

    // Output the second term if n >= 2
    if (n >= 2) {
        cout << b;
    }
    cout<<endl;
    for(int i=0;i<n-2;i++){
        int c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
        
    }
}