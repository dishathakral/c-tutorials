#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int input;
    cout<<"enter elements of array(to stop enter -1):"<<endl;
    //input array
    while (true){
        cin>>input;
        if(input==-1){
            break;
        }
        else{
            arr.push_back(input);
        }
    } 
    int size=arr.size();
    //output array
    cout<<"array is:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    //find missing number.
    int n=size+1;
    int sum=(n*(n+1))/2;
    int temp=0;
    for(int i=0;i<size;i++){
        temp=temp+arr[i];
    }

    cout<<"missing number is:"<<sum-temp<<endl;
    
}