//delete head node from linked list
#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node* next;
  //constructor
  node(int data1,node* next1){
    data=data1;
    next=next1;
  }
  node(int data1){
    data=data1;
    next=nullptr;
  }
};
//array to linked list
node* arrtolinklist(int *arr,int n){
    node* head=new node(arr[0]);
    node* mover=head;
    //linking mover pointer to head pointer
    for(int i=1;i<n;i++){
        node* temp=new node(arr[i]);
        (*mover).next=temp;
        mover=temp;
    }
    return head;
}
//to remove head node and give new head node
node* newhead(node *head){
    if (head == nullptr) {
        return nullptr; // If the list is empty, return nullptr
    }

    node* temp=head;
    head=(*head).next;
    delete temp;
    return head;
}

void printlinkedlist(node *head){
    node *temp=head;
    while(temp !=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



int main(){
    int arr[]={89,90,77,89};
    int size=sizeof(arr)/sizeof(arr[0]);
    node* head=arrtolinklist(arr,size);
    head=newhead(head);
    cout<<head->data<<endl;
    printlinkedlist(head);
    
}
