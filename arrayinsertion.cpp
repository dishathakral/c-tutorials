#include<bits/stdc++.h>
using namespace std;

int main(){
    //input array
    vector<int> arr;
    int input;
    cout<<"enter the elemets of array(to stop enter -1):"<<endl;
    while(true){
        cin>>input;
        if(input==-1){
            break;
        }
        else{
            arr.push_back(input);
        }
    }
    //output array
    cout<<"array is:";
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    int size=arr.size();
    int position,value;
    cout<<"enter the index where you want to insert element:"<<endl;
    cin>>position;
    cout<<"enter value which you want to insert:"<<endl;
    cin>>value;
    for(int i=size;i>position;i--){
       arr[i]=arr[i-1];
    }
    arr[position]=value;

    cout<<"array is:";
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }

}