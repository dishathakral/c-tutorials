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
void printlinklist(node* head){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
// delete any value from linked list
node* deletevalue(node *head,int value){
     node *temp=head;
     node *previous=nullptr;
     while(temp->data==value && temp!=nullptr){
        head=head->next;
        delete temp;
        temp=head;
     }
     while(temp!=nullptr){
        if(temp->data==value){
            previous->next= previous->next->next;
            delete temp;
            temp=previous->next;

        }
        else{
        previous=temp;
        temp=temp->next;
        }
     }
     return head;
}
int main(){
    int arr[]={90,90,78,90};
    int size=sizeof(arr)/sizeof(arr[0]);
    node* head=arrtolinklist(arr,size);
    head=deletevalue(head,90);
    printlinklist(head);
}
