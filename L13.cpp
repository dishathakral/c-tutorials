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
//insert new element in link list at head position
node* insertathead(node* head,int value){
    node* temp=new node(value);
    temp->next=head;
    return temp;
}
int main(){
    int arr[]={90,88,90,87};
    int size=sizeof(arr)/sizeof(arr[0]);
    node* head=arrtolinklist(arr,size);
    head=insertathead(head,99);
    printlinklist(head);
}