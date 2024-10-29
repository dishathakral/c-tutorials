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
//arr to linked list which wiil point to head of linked list
node* arrtolinklist(int *arr,int n){
    node *head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<n;i++){
        node* temp=new node(arr[i]);
        mover->next=temp;//mover will point to temp which is next node
        mover=temp;
    }
    return head;
}
//to find length of linked list
int length(node *head){
    node *temp=head;
    int count=0;
    while(temp!=nullptr){
      temp=temp->next;
      count++;
    }
    return count;
}
//search in linklist given head of linklist and value you want to search
void search(node* head,int val){
    node* temp=head;
    bool found=false;
    while(temp){
        if(val==temp->data){
            found=true;
            break;
        }
        temp=temp->next;
    }
    if (found) {
        cout << val << " is present in linked list\n";
    } else {
        cout << val << " is not present in linked list\n";
    }
}
int main(){
    int arr[]={67,90,88,99,80};
    int size=sizeof(arr)/sizeof(arr[0]);
    node *head=arrtolinklist(arr,size);
    search(head,90);
}