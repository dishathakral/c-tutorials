//binary sort
#include <iostream>
using namespace std;

int main() {
    int n;
    int found=0;

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
    //sorted array
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    //print array
    cout<<"print sorted array:";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
     // element you want to search
    int key;
    cout<<"enter key element:";
    cin>>key;

    int left=0;
    int right=n-1;
    while(right>left){
        int mid=(left+right)/2;
        if(arr[mid]==key){
            cout<< "element found at index:"<<mid;
            break;
        }
        else if(arr[mid]>key){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    if(!key){
        cout<<"array does not contain that element";
    }
}