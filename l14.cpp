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
//delete from tail position
node* removetail(node* head){
   node* temp=head;
   node* previous=nullptr;
   while(temp->next!=nullptr){
    
    previous=temp;
    temp=temp->next;
   }
   previous->next=nullptr;
   delete temp;
   return head;
}
//delete from tail position
node* insertattail(node* head,int k){
    if(head==NULL){
        return new node(k);
    }
   node* temp=head;
   while(temp->next!=nullptr){
    temp=temp->next;//reach last node
   }
   temp->next=new node(k);
   return head;

}
int main(){
    int arr[]={90,88,90,87};
    int size=sizeof(arr)/sizeof(arr[0]);
    node* head=arrtolinklist(arr,size);
    head=insertattail(head,99);
    printlinklist(head);
}