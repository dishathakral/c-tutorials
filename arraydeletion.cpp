//deletion of element in array
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
    cout<<"enter the index where you want to delete element:"<<endl;
    cin>>position;
     if (position >= 0 && position < arr.size()){
    for(int i=position;i<size-1;i++){
       arr[i]=arr[i+1];
    }
     }
     else {
        cout << "Invalid index!" << endl;
        return 1;
    }

   cout<<"array is:";
    for(int i=0;i<size-1;i++){
        cout<<arr[i]<<" ";
    }

}