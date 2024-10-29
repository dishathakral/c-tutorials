#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,7,0,8,4};
    int n=sizeof(a)/sizeof(a[0]);
    int temp;
    char x;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
for(int i=0;i<n;i++){
   cout<<a[i];
}  
cout<<"\n";
for(int i=0;i<n;i++){
if(a[i]>0){
     x='t';//t means all elements are positive 
}
else{
     x='f';//f means all elements are negative
}
}
cout<<x;
cout<<"\n";
if(x=='t'){
    cout<<a[n-2]<<a[n-1];
}
else{
   cout<<a[0]<<a[1];
}
    return 0;
}