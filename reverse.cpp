#include <iostream>
using namespace std;

int main() {
    int n;
    

    // Input: size of the array
    cout << "Enter the number of elements in the array: "<<endl;
    cin >> n;

    int arr[n];

    // Input: elements of the array
    cout << "Enter the elements of the array: "<<endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    //output array
    cout << "array: "<<endl;
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"reversed array";
    //reverse array
    for(int i=n-1;i>=0;i--){
     cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"another reversed array";
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
     for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}