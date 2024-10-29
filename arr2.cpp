#include<iostream>
using namespace std;
int main(){
    int arr[]={10,11,12,13,14,15,17,19,20};
    int expected_array[]={10,11,12,13,14,15,16,17,19,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<i+2;j++){
            if(arr[j]-arr[i]!=1){
                cout<<arr[i]+1<<" ";
            }
        }
    }
    return 0;
}

