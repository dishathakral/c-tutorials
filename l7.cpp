//delete tail  node from linked list
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


void printlinkedlist(node *head){
    node *temp=head;
    while(temp !=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

//to remove tail of linked list
node* removetail(node* head){
    node *temp=head;
    if(temp==nullptr || temp->next ==nullptr){
        return 0;
    }
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}



int main(){
    int arr[]={89,90,77,89};
    int size=sizeof(arr)/sizeof(arr[0]);
    node* head=arrtolinklist(arr,size);
    head=removetail(head);
    printlinkedlist(head);
    
}
