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
//to remove any element of linked list from given position
node* removefromposition(node* head,int k){
      if(head==nullptr){
        return head;
      }
      if(k==1){
        node* temp=head;
        head=head->next;
        delete temp;
        return head;
      }
      int ctr=0;node* previous=nullptr;node* temp=head;
      while(temp!=nullptr){
        ctr++;
        if(ctr==k){
            previous->next=previous->next->next;
            delete temp;
            break;
        }
        previous=temp;
        temp=temp->next;
      }
      return head;
}

int main(){
    int arr[]={89,90,77,89};
    int size=sizeof(arr)/sizeof(arr[0]);
    node* head=arrtolinklist(arr,size);
    head=removefromposition(head,2);
    
    printlinkedlist(head);
    
}
