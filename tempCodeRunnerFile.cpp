//delete from tail position
node* removetail(node* head){
   node* temp=head;
   node* previous=nullptr;
   while(temp!=nullptr){
   if(temp->next==nullptr){
    previous->next=nullptr;
    delete temp;
   }
   else{
    previous=temp;
    temp=temp->next;
   }
   }
   return head;
}
