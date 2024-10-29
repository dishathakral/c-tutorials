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
//to convert array to linked list
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
// print linked list
void printlinklist(node* head){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
//to remove duplicate enteries from linked list
node* removeduplicate(node* head){
    node* temp=head;
    node* previous=nullptr;
    unordered_set<int> seen;
    while(temp!=nullptr){
        if(seen.find(temp->data)==seen.end()){
           seen.insert(temp->data);
            previous=temp;
            temp=temp->next;
        }
        else{
           previous->next=previous->next->next;
          delete temp;
         
         temp=previous->next; 
        }
    }
    return head;
}
int main(){
    int arr[]={6,8,6,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    node* head=arrtolinklist(arr,size);
    head=removeduplicate(head);
    printlinklist(head);
}