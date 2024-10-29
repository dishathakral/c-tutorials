#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *next;
node(int data1,node *next1){
    data=data1;
    next=next1;
    }
node(int data1){
    data=data1;
    next=nullptr;
}    
};
//to return head function/first node
node* arraytolinklist(int *arr){
    node *head=new node(arr[0]);
    node *mover=head;
    for(int i=1;i<4;i++){
        node *temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int main(){
    int arr[4]={10,20,30,40};
    node* r=arraytolinklist(arr);
    cout<<r->data;
}