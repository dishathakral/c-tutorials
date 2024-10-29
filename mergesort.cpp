#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& arr,vector<int>& temp,int low,int mid,int high){
    
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }

    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    //copy of array
   for (int i = low; i <= high; i++) {
        arr[i] = temp[i];
    }
}
int mergesort( vector<int>& arr,vector<int>& temp,int low,int high){
   if(low>=high){return 0;}
   int mid=(low+high)/2;
   mergesort(  arr,temp,low,mid);
   mergesort(arr,temp,mid+1,high);
   merge(arr,temp,low,mid,high);
}

int main(){
    vector<int> arr;
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
    //output array
    cout<<"array is:";
    for(int val:arr){
        cout<<val<<" ";
    }
    int low=0;
    int high=arr.size()-1;
    vector<int> temp;

    mergesort(arr,temp,low,high);
}