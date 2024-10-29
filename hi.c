#include <stdio.h>

// Binary search function
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // If the target is found at the middle
        if (arr[mid] == target)
            return mid;
        
        // If the target is greater, ignore the left half
        if (arr[mid] < target)
            left = mid + 1;
        
        // If the target is smaller, ignore the right half
        else
            right = mid - 1;
    }
    
    // If the target is not present in the array
    return -1;
}

// Main function to test the binary search
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 12;
    int index = binarySearch(arr, size, target);
    
    if (index != -1)
        printf("Element %d found at index %d\n", target, index);
    else
        printf("Element %d not found in the array\n", target);
    
    return 0;
}
