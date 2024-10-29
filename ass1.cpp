#include<iostream>
using namespace std;

int main() {
    int arr[7] = {2, 4, 7, 2, 5, 7, 1};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    cout << "Original size: " << size << endl; // Output the original size of the array
    
    // Loop through each element in the array
    for (int i = 0; i < size; i++) {
        // Compare the current element with the rest of the elements in the array
        for (int j = i + 1; j < size; j++) {
            // If a duplicate is found
            if (arr[j] == arr[i]) {
                // Shift all elements after the duplicate to the left
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                // Decrease the size of the array
                size--;
                // Move the inner loop counter back one step to recheck the current element
                j--;
            }
        }
    }
    
    // Output the unique elements in the array
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] <<" ";
    }
    
    return 0;
}
