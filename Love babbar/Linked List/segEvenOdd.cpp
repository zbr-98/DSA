/* 
Segregate even and odd nodes of linked list */

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
// traversal
void traverse(Node *head){
      while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
      }
      cout<<endl;
}
// naive approach to segreagte even and odd
Node *seg(Node *head){
      Node *st=head;
      Node *curr=head;
      int l=0,i=0;
      for(curr=head; curr->next!=NULL; curr=curr->next){
            l++;
      }
      cout<<curr->data<<endl;
      while(i<l){
            if(st->data&1){
                  curr->next=st;
                  curr=curr->next;
            }
            st=st->next;
            i++;
      }
      return st;
}

Node *segEvenOdd(Node *head){
      Node *Es=NULL,*Ee=NULL, *Os=NULL, *Oe=NULL;

      for(Node *curr=head; curr!=NULL; curr=curr->next){
            if(curr->data&1){
                  if(Os==NULL){
                        Os=curr;
                        Oe=Os;
                  }else{
                        Oe->next=curr;
                        Oe=Oe->next;
                  }
            }
            else{
                  if(Es==NULL){
                        Es=curr;
                        Ee=Es;
                  }else{
                        Ee->next=curr;
                        Ee=Ee->next;
                  }
            }
      }
      if(Es==NULL||Os==NULL) return head;

      Ee->next=Os;
      Oe->next=NULL;

      return Es;
}
main(){
      Node *head=new Node(17);
      insertatend(head,15);
      insertatend(head,8);
      insertatend(head,12);
      insertatend(head,10);
      insertatend(head,5);
      insertatend(head,4);

      traverse(head);
      cout<<endl;
      head=segEvenOdd(head);
      traverse(head);

}