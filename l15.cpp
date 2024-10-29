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
//covert array to link list
node* arrtolinklist(int *arr,int n){
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<n;i++){
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
//print linklist
void printlinklist(node *head){
    node* temp=head;
    while(temp != nullptr) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
//insert at before k node
node* insertbeforeknode(node* head,int k,int value){
    node* temp=head;
    node* previous=nullptr;
    int ctr=0;
    if(head==NULL){
        node* newnode=new node(value,nullptr);
        return newnode;
    }
    if(head->data==k){
        node* newnode=new node(value);
        newnode->next=head;
        return newnode;
    }
    while(temp!=nullptr){
        if(temp->data==k){
            node* newnode=new node(value);
            newnode->next=temp;
            if (previous != nullptr) {
                previous->next = newnode;
            }
            return head; // Return the modified head
        }
        else{
            previous=temp;
            temp=temp->next;
        }
    }
        
    
    return head;
}

int main(){
    int arr[]={90,88,90,87};
    int size=sizeof(arr)/sizeof(arr[0]);
    node* head=arrtolinklist(arr,size);
    head=insertbeforeknode(head,87,100);
    printlinklist(head);
}