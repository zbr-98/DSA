// detect and delete loop
#include<bits/stdc++.h>
using namespace std;

class Node{
      public:
      int data;
      Node *next;

      // constructor
      Node(int d){
            data=d;
            next=NULL;
      }
};

//inserting at end
void insertatend(Node *head, int d){
      // create new node
      Node *new_node=new Node(d);
      // traverse till last node
      Node *curr=head;
      while(curr->next!=NULL)
            curr=curr->next;
      // now point this last node to new node
      curr->next=new_node; 
}

// insert at tail
void insertattail(Node *&tail, int d){
      Node *new_node=new Node(d);
      tail->next=new_node;
      tail=new_node;
}

void traverse(Node* head){
      Node *temp=head;
      while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
      }
      cout<<endl;
}
// 
Node * detectLoop(Node *&head){
      Node *slow=head;
      Node *fast=head;

      while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast) return slow;
      }
      return NULL;
}
bool DetAndDel(Node *& head){
      Node *fast=detectLoop(head);

      Node *slow=head;

      while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
      }
      Node *temp=slow;
      Node *temp1=temp;

      while(temp1->next!=temp){
            temp1=temp1->next;
      }
      temp1->next=NULL;

      return true;
}

main(){
      Node *a=new Node(4);
      Node *head=a;
      Node *tail=a;
      
      insertattail(tail,13);
      insertattail(tail,7);
      insertattail(tail,8);
      
      Node *temp=tail;

      insertattail(tail,6);
      insertattail(tail,16);
      insertattail(tail,5);

      // looping
      tail->next=temp;

      traverse(head);

      cout<<DetAndDel(head)<<endl;

      // traverse(head); 

}