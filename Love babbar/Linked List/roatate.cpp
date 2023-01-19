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
      cout<<endl;
      while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
      }
}
// find length of linked list
int LLlen(Node *head){
      int count=0;
      Node *temp=head;
      while(temp!=NULL){
            count++;
            temp=temp->next;
      }
      return count;
}

Node *rotateLL(Node *head, int k){

      int N=LLlen(head);
      if(head==NULL||head->next==NULL||k==0||k%N==0) return head;

      Node *prv=NULL,*curr=head;

      int c=N-k%N;

      while(c--){
            prv=curr;
            curr=curr->next;
      }
      prv->next=NULL;

      Node *tmp=curr;

      while(tmp->next!=NULL){
            tmp=tmp->next;
      }
      tmp->next=head;
      return curr;

}

main(){
      Node *head=new Node(3);
      Node *temp1=new Node(10);
      Node *temp2=new Node(20);
      head->next=temp1;
      head->next->next=temp2;

      insertatend(head,10);
      insertatend(head,3);
      insertatend(head,60);

      traverse(head);
      
      Node *temp=rotateLL(head,2);
      traverse(temp);


}