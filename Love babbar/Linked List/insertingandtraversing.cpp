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

// iterative traversal
void traverse(Node* head){
      Node *temp=head;
      while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
      }
}

// recursive traversal
void traverseR(Node* head){
      if(head==NULL) return;

      cout<<head->data<<" ";
      traverse(head->next);
}

// inserting elements at head
void insertathead(Node* &head,int d){

      // create new node
      Node *new_node=new Node(d);

      // point its node to head
      new_node->next=head;
      // update head
      head=new_node;
}

// inserting at end
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


// insert at given position
void insert(Node* &head, int pos, int d){
      Node *temp=new Node(d);

      if(pos==1){
            temp->next=head;
            head=temp;
            return;
      }

      Node *curr=head;

      for(int i=1;i<pos-1 &&curr!=NULL;i++){
            curr=curr->next;
      }
      if(curr==NULL) return;

      temp->next=curr->next;
      curr->next=temp;
}

// deleting head
void deletehead(Node* &head){
      if(head==NULL) return;

      Node *temp=head;
      head=head->next;
      temp->next=NULL;
      delete temp;
}

// deleting last node (tail node)
void deletetail(Node* &head){
 
      // if linked list is empty return null
      if(head==NULL) return;
      // if there is single element in linked list delete it
      if(head->next==NULL){
            delete head;
      }

      Node *temp=head;
      while(temp->next->next!=NULL){
            temp=temp->next;
      }
      delete temp->next;
      temp->next=NULL;
}

// serach in a linked list
int search(Node* head, int x){
      Node *temp=head;
      for(int i=1; temp!=NULL;i++){
            if(temp->data==x) return i;
            temp=temp->next;
      }
      return -1;
}
// recursive way
int searchR(Node* head,int x, int i){
      Node *temp=head;
      if(temp->data==x) return 1;
      if(temp==NULL) return -1;

      return searchR(temp->next,x,i+1);
}

main(){
      Node *head=new Node(3);
      head->next=new Node(10);
      head->next->next=new Node(20);
      // printing elements
      traverse(head);

      // inserting at head
      insertathead(head,2);
      cout<<endl;
      traverseR(head);

      // inserting at end
      insertatend(head,6);
      cout<<endl;
      traverseR(head);

      // deleteing head
      cout<<endl;
      deletehead(head);
      traverse(head); 

      // deleting tail
      cout<<endl;
      deletetail(head);
      traverse(head);

      // insert at given position
      cout<<endl;
      insert(head,3,15);
      traverse(head);

      // searching
      cout<<endl<<search(head,10);

      cout<<endl<<searchR(head,3,1); //by recursion
}
