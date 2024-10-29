#include<iostream>
using namespace std;

int main() {
    // Initialize the array
    int a[] = {1, 2, 3, 4, 7, 0, 8, 4};

    // Calculate the size of the array
    int n = sizeof(a) / sizeof(a[0]);

    // Variable to store whether all elements are positive or negative
    string x;

    // Bubble sort to sort the array in ascending order
    int temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j <= n - 1 - i; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Check if all elements are positive or negative
    for(int i = 0; i < n; i++) {
        if(a[i] > 0) {
            x = "positive"; 
        } else {
            x = "negative"; 
        }
    }

    // Print whether all elements are positive or negative
    cout << x << endl;

    // Print the required elements based on whether all elements are positive or negative
    if(x == "positive") {
        // If all elements are positive, print the last two elements
        cout << a[n - 2] << " " << a[n - 1];
    } else {
        // If all elements are negative, print the first two elements
        cout << a[0] << " " << a[1];
    }

    return 0;
}
