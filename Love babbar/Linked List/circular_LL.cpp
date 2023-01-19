#include<bits/stdc++.h>
using namespace std;

class Node{
      public:
      int data;
      Node *prev;
      Node *next;
      Node(int d){
            this->data=d;
            next=NULL;
            prev=NULL;
      }
};
// insert at head
Node * insertathead(Node* head, int d){
      Node *new_node=new Node(d);
      new_node->next=head;
      head->prev=new_node;
      head=new_node;
      return head;
}
// insert at end
Node * insertatEnd(Node *head, int d){
      
      Node *newNode=new Node(d);
      if(head==NULL) return newNode;

      Node *temp=head;
      while(temp->next!=NULL){
            temp=temp->next;
      }
      temp->next=newNode;
      newNode->prev=temp;

      return head;
}

// reverse DLL
Node *reverseDLL(Node *head){
      Node *prev=NULL,*curr=head;
      while(curr!=NULL){
            prev=curr->prev;
            curr->prev=curr->next;
            curr->next=prev;
            curr=curr->prev;
      }
      return prev->prev;
}
// delete head
Node *delHead(Node *head){
      if(head==NULL) return NULL;
      if(head->next==NULL){
            delete head;
            return NULL;
      }

      Node *temp=head;
      head=head->next;
      head->prev=NULL;
      delete temp;
      return head;
}
// delete last node of DLL
Node *deleteTail(Node *head){
      if(head==NULL) return NULL;
      if(head->next==NULL){
            delete head;
            return NULL;
      }
      Node *temp=head;
      while(temp->next!=NULL){
            temp=temp->next;
      }
      temp->prev->next=NULL;
      delete temp;
      return head;
}
// OR pass tail node
void deleteTail(Node* &tail){
      Node *temp=tail;
      temp->prev->next=NULL;
      tail=temp->prev;
      
      delete temp;

}
main(){
      Node *temp=new Node(5);
      insertathead(temp,4);

      
}