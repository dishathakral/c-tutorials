#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
  }

}
void pattern2(int n){
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<"*";
    }
    cout<<endl;
  }
  
}
int main(){
 cout<<"enter number of rows in patter"<<endl;
int n;
cin>>n;
pattern1(n);
pattern2(n);
}