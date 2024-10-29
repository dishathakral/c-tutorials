#include <iostream>
#include <vector>
using namespace std;

void find_min_max(const vector<int>& arr) {
    if (arr.empty()) {
        cout << "Array is empty. No min or max to find." << endl;
        return;
    }

    int min = arr[0], max = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "max element is: " << max << endl;
    cout << "min element is: " << min << endl;
}

int main() {
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

    // Output array
    cout << "array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Find and print min and max
    find_min_max(arr);

    return 0;
}
