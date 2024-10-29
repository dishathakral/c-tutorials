//remove duplicate elements from an array and return a new array.
#include<iostream>
using namespace std;
int main(){
    int arr[7]={2,4,7,2,5,7,1};
    int size=sizeof(arr)/sizeof(arr[0]);//number of elements in array
    cout<<size;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]==arr[i]){
                for(int k=j;k<size-1;k++){
                    arr[k]=arr[k+1];}
                    size--;
                    j--;
                
            }
        }
    }
    for(int i=0;i<size;i++){
       cout<<arr[i]<<"\t";
    }
    return 0;
}

