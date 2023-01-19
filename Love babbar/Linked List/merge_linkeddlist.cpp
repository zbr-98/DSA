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

void traverse(Node* head){
      Node *temp=head;
      while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
      }
      cout<<endl;
}
// merge two sorted linked list
Node * merge(Node *head1, Node *head2){

      if(head1==NULL) return head2;
      if(head2==NULL) return head1;

      Node *temp1=head1;
      Node *temp2=head2;

      Node *dum=new Node(-1);
      Node *dummy=dum;


      while(temp1!=NULL && temp2!=NULL){
            if(temp1->data <= temp2->data){
                  dummy->next=temp1;
                  dummy=temp1;
                  temp1=temp1->next;
            }
            else{
                  dummy->next=temp2;
                  dummy=temp2;
                  temp2=temp2->next;
            }
      }
      while(temp1!=NULL){
            dummy->next=temp1;
            dummy=temp1;
            temp1=temp1->next;
      }
      while(temp2!=NULL){
            dummy->next=temp2;
            dummy=temp2;
            temp2=temp2->next;
      }
      dum=dum->next;

      dummy->next=NULL;

      return dum;
}
void sort012(Node* &head){
      int count0=0,count1=0,count2=0;
      Node *temp=head;

      while(temp!=NULL){
            if(temp->data==0)
                  count0++;
            if(temp->data==1)
                  count1++;
            if(temp->data==2)
                  count2++;
            
            temp=temp->next;
      }
      temp=head;

      while(count0--){
            temp->data=0;
            temp=temp->next;
      }
      while(count1--){
            temp->data=1;
            temp=temp->next;
      }
      while(count2--){
            temp->data=2;
            temp=temp->next;
      }

}


main(){
      /* Node *head1=new Node(2);
      Node *head2=new Node(2);

      insertatend(head1,0);
      insertatend(head1,0);
      insertatend(head1,1);

      traverse(head1);

      insertatend(head2,2);
      insertatend(head2,1);
      insertatend(head2,0);
      insertatend(head2,1);

      traverse(head2);

      Node *head=merge(head1,head2); */

      Node *head=new Node(1);
      insertatend(head,0);
      insertatend(head,1);
      insertatend(head,1);
      insertatend(head,2);
      insertatend(head,0);

      traverse(head);

      sort012(head);
      traverse(head);


}