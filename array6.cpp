#include<bits/stdc++.h>
using namespace std;
void create_array( vector<int>& arr){
   int input;
    cout<<"enter elements of array(enter -1 to stop:)";
   
    while(true){
         cin>>input;
        if(input==-1){
            break;
        }
        else{
            arr.push_back(input);
        }
    }
}
int main(){
    vector<int> arr1,arr2,arr_final;
    //create first array
    create_array(arr1);
    //output of first array
    for(int val:arr1){
        cout<<val<<" ";
    }
    int size1=arr1.size();
    cout<<endl;
    //create second array
    create_array(arr2);
    //output of second array
    for(int val:arr2){
        cout<<val<<" ";
    }
    int size2=arr2.size();
    cout<<endl;
    // Resize arr_final to fit both arr1 and arr2
    arr_final.resize(arr1.size() + arr2.size());

    for(int i=0;i<size1+size2;i++){
        if(i<size1){
            arr_final[i]=arr1[i];
        }
        else{
            arr_final[i]=arr2[i-size1];
        }
    }
    cout<<endl;
    sort(arr_final.begin(),arr_final.end());
    //output of sorted array
    cout<<"merged sorted array:"<<endl;
    for(int val:arr_final){
        cout<<val<<" ";
    }
}