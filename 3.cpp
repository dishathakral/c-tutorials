#include<iostream>
using namespace std;

int main() {
    // Original array with missing element
    int arr[] = {10, 11, 12, 13, 14, 15, 17, 19, 20};
    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Iterate through the array to find the missing number
    for(int i = 0; i < n - 1; i++) {
        // Check if there's a gap between consecutive elements
        for(int j = i + 1; j < i + 2; j++) {
            if(arr[j] - arr[i] != 1) {
                // Print the missing number
                cout << arr[i] + 1 << " ";
            }
        }
    }

    return 0;
}
