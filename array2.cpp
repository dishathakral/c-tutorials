#include<bits/stdc++.h>
using namespace std;

void find_min_max(int arr[],int size){
    int min,max,i;
    if(size%2==1){//if number of elements in array is odd
       min=arr[0];max=arr[0];
       i=1;
    }
    else if(size%2==0){//if number of elements of array is even
        if(arr[0]>=arr[1]){
            max=arr[0];min=arr[1];
        }
        else{
            max=arr[1];min=arr[0];
        }
        i=2;
    }
    while(i<size-1){
        if(arr[i]>arr[i+1]){
            if(arr[i]>max){
                max=arr[i];
            }
            if(arr[i+1]<min){
                min=arr[i+1];
            }
        }
        else{
            if(arr[i+1]>max){
                max=arr[i+1];
            }
            if(arr[i]<min){
                min=arr[i];
            }
        }
        i=i+2;
    }
    cout<<"max element is:"<<max<<endl;
    cout<<"min element is:"<<min<<endl;
}

int main(){
    vector<int> arr;
    int input;

    cout << "Enter elements of the array (enter -1 to stop):" << endl;

    // Read inputs until user enters -1
    while (true) {
        cin >> input;
        if (input == -1) {
            break;  // Exit loop if sentinel value is entered
        }
        arr.push_back(input);  // Add input to the vector
    }
    int n=arr.size();
   
    //output array
    cout << "array: ";
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
     cout<<endl;
     find_min_max(arr.data(),n);
    

}