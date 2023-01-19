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

// middle element
Node * find_mid(Node *head){
      Node *slow=head;
      Node *fast=head->next;

      while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
      }
      cout<<endl<<"Mid element is: "<<slow->data;
      return slow;
}

// merge two sorted linked list
Node * merge(Node *head1, Node *head2){

      if(head1==NULL) return head2;
      if(head2==NULL) return head1;

      Node *temp1=head1;
      Node *temp2=head2;

      Node *ans=new Node(-1);
      Node *dummy=ans;


      while(temp1!=NULL && temp2!=NULL){
            if(temp1->data < temp2->data){
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
      dummy->next=NULL;

      ans=ans->next;
      return ans;
}

// merge sort
Node * mergesort(Node *head){
      
      // base case
      if(head==NULL||head->next==NULL) return head;

      // find middle element
      Node *mid=find_mid(head);
      // two halves
      Node *left=head;
      Node *right=mid->next;

      mid->next=NULL;

      // recursive calls for sorting
      left=mergesort(left);
      right=mergesort(right);

      Node *ans=merge(left,right);
      return ans;

}
main(){
       Node *head=new Node(1);
      insertatend(head,0);
      insertatend(head,3);
      insertatend(head,11);
      insertatend(head,6);
      insertatend(head,5);
      insertatend(head,15);

      traverse(head);
      
      Node *h1=mergesort(head);
      cout<<endl;
      traverse(h1);


}