#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;

    // Constructor
    node(int data1, node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

// Function to convert an array to a linked list
node* arrtolinklist(int* arr, int n) {
    node* head = new node(arr[0]);
    node* mover = head;
    for (int i = 1; i < n; i++) {
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Function to print the linked list
void printlinklist(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to remove duplicates from a linked list
node* removeDuplicates(node* head) {
    if (head == nullptr) return head;

    unordered_set<int> seen;  // To store unique elements
    node* temp = head;
    node* previous = nullptr;

    while (temp != nullptr) {
        // If the value is already in the set, delete the node
        if (seen.find(temp->data) != seen.end()) {
            previous->next = temp->next;  // Skip the node
            delete temp;
            temp = previous->next;        // Move to the next node
        } else {
            seen.insert(temp->data);      // Insert the unique value into the set
            previous = temp;              // Move previous pointer
            temp = temp->next;            // Move temp pointer
        }
    }
    return head;
}

int main() {
    int arr[] = {88, 90, 78, 90, 90, 88, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    node* head = arrtolinklist(arr, size);
    cout << "Original list: ";
    printlinklist(head);

    head = removeDuplicates(head);  // Remove duplicate entries
    cout << "List after removing duplicates: ";
    printlinklist(head);

    return 0;
}
