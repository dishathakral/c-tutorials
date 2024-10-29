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

// Function to convert array to linked list
node* arrtolinklist(int *arr, int n) {
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

// Function to delete all occurrences of a value from linked list
node* deletevalue(node *head, int value) {
    node *temp = head;
    node *previous = nullptr;
    
    // Handle deletion of head nodes
    while (temp != nullptr && temp->data == value) {
        head = head->next;
        delete temp;
        temp = head;
    }

    // Traverse the rest of the list
    while (temp != nullptr) {
        if (temp->data == value) {
            previous->next = temp->next; // Skip the current node
            delete temp;                 // Delete the node
            temp = previous->next;       // Update temp to the next node
        } else {
            previous = temp;             // Move previous forward
            temp = temp->next;           // Move temp forward
        }
    }

    return head;
}

int main() {
    int arr[] = {90, 90, 78, 90, 77, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    node* head = arrtolinklist(arr, size);

    cout << "Original List: ";
    printlinklist(head);

    head = deletevalue(head, 90);

    cout << "List after deleting all occurrences of 90: ";
    printlinklist(head);

    return 0;
}
