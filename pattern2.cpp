#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
        cout<<j<<" ";
    }
    cout<<endl;
   }
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    pattern(n);
}