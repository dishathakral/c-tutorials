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

    // element you want to search
    int key;
    cout<<"enter key element:";
    cin>>key;

    //
    for(int i = 0; i < n; i++) {
        if(arr[i]==key ) {
            cout<<"the idex for element is:"<<i<<endl;
            found=1;
            break;
        }
       
    }
    if(!found){
        cout<<"element is not there";
    }


   
    return 0;
}
