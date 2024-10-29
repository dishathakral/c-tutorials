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
// convert set to link list
node* settolinklist(unordered_set<int> common){
   node* head=nullptr;
   node*temp=nullptr;
   for(int element:common){
    node* newnode=new node(element);
    if(head==nullptr){
        head=newnode;
        temp=head;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
   }
   return head;
}

//find common elemets from both linked list
node* commonlinklist(node* head1,node* head2){
    node* temp1=head1;
    node* temp2=head2;
    unordered_set<int>seen1;
    unordered_set<int>seen2;
    unordered_set<int>commonelement;
    while(temp1!=nullptr){
        if(seen1.find(temp1->data)==seen1.end()){
            seen1.insert(temp1->data);
            temp1=temp1->next;
        }
        else{
            temp1=temp1->next;
        }
    }
    while(temp2!=nullptr){
        if(seen2.find(temp2->data)==seen2.end()){
            seen2.insert(temp2->data);
            temp2=temp2->next;
        }
        else{
            temp2=temp2->next;
        }
    }
    for(int element:seen1){
        if(seen2.find(element)!=seen2.end()){
            commonelement.insert(element);
        }
    }
   node* head=settolinklist(commonelement);
   return head;
}
int main(){
    int arr1[]={90,88,90,87};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    node* head1=arrtolinklist(arr1,size1);
    int arr2[]={90,88,99,88};
    int size2=sizeof(arr2)/sizeof(arr2[0]);
   node* head2=arrtolinklist(arr2,size2);
    node* head=commonlinklist(head1,head2);
    printlinklist(head);
}