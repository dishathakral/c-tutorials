#include<bits/stdc++.h>
using namespace std;
int pattern(int n){
    for(int i=1;i<=n;i++){
        int start=1;
       
        for(int j=1;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}
int main(){
cout<<"enter number of rows in patter:";
int n;
cin>>n;
pattern(n);
}