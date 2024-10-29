#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    //constructor
    node(int data1,node *next1){
        data=data1;
        next=next1;
    }
    node(int data1){
        data=data1;
        next=nullptr;
    }
};
//to return head and to convert array to linked list
node* arrtolinklist(int *arr,int n){
    node* head=new node(arr[0]);
    node *mover=head;
    for(int i=1;i<n;i++){
      node *temp=new node(arr[i]);
      mover->next=temp;
      mover=temp;  
    }
    return head;
}
int main(){
    int arr[]={35,89,90,88};
    int size=sizeof(arr)/sizeof(arr[0]);
    node *head=arrtolinklist(arr,size);
    node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}