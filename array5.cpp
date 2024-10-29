//find missing number from 1 to n
#include<bits/stdc++.h>
using namespace std;
 int find_min(int arr[],int size){
      int min=arr[0];
      for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
      }
      return min;
 }
int main(){
    vector<int> arr;
    int input;
    cout<<"enter elements of array(to stop enter -1):";
    while(true){//input of array
        cin>>input;
        if(input==-1){
            break;
        }
        else{
            arr.push_back(input);
        }
    }
    int size=arr.size();
    //output of array
    cout<<"array is:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //int min=find_min(arr.data(),size);
    auto min=*min_element(arr.begin(),arr.end());

    //find missing number
    int xor_array=0;
    for(int i=0;i<size;i++){
        xor_array^=arr[i];
    }
    int xor_full=0;
    for(int i=min;i<=min+size;i++){
        xor_full^=i;
    }

    int missing_number=xor_array^xor_full;
    cout<<"missing number:"<<missing_number;
}