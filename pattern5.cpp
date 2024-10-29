#include<bits/stdc++.h>
using namespace std;
void patter(int n){
    for(int i=1;i<=n;i++){
        //for space
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        //for *
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        //for space
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
cout<<"enter number of rows in patter"<<endl;
int n;
cin>>n;
patter(n);
}