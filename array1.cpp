#include<bits/stdc++.h>
using namespace std;
 
 int find_min(int arr[],int size){
    int min =arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"min is:"<<min<<endl;
 }

 int find_max(int arr[],int size){
    int max =arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"max is:"<<max<<endl;
 }
int main(){
    //input array
    int n;

    // Input: size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Input: elements of the array
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   
    //output array
    cout << "array: ";
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
     cout<<endl;
    
    find_min(arr,n);
    find_max(arr,n);

}