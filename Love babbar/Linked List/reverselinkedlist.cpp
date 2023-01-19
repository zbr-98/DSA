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
}

//reverse  
Node *reverse(Node* &head){
      if(head==NULL) cout<<"List is empty";

      Node *prv=NULL;
      Node *curr=head,*frwrd;
      
      while(curr!=NULL){
            // changing connection
            frwrd=curr->next;
            curr->next=prv;

            prv=curr;
            curr=frwrd;
      }
      return prv;
}
// reverese using recursion

Node* reverseList(Node* head) {
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    
    Node* newhead = reverseList(head->next);
    head->next->next=head;
    head->next = NULL;
    
    return newhead;
}
//reverse by recursion
Node* reverseR(Node* &curr, Node* prev){

      // base case
      if(curr==NULL) return prev;

      // change connection
      Node *frw=curr->next;
      curr->next=prev;

      // recursive call
       return reverseR(frw, curr);
}

// find middle of linked list
// approach1: find length, l/2; traverse by l/2

/* int find_mid(Node *head){
      int l=0;
      Node *curr=head;
      while(curr!=NULL){
            l++;
            curr=curr->next;
      }
      cout<<"\nlength="<<l;
      // middle element
      l/=2;
      
      for(int i=1;i<=l;i++){
            head=head->next;
      }
      cout<<"\nMiddle element is : "<<head->data;
} */

// approach2: fast and slow pointer
void find_mid(Node *head){
      Node *slow=head,*fast=head;

      cout<<endl;
      while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            
            cout<<"\nSlow data:"<<slow->data<<" ";
            fast=fast->next->next;
            cout<<"\nfast data: "<<fast->data<<" ";
      }
      cout<<"\nMiddle element is : "<<slow->data;
}

// palindrome
bool palindrome(Node *head){
      if(head==NULL)
            return true;
 
      Node *slow=head,*fast=head;
      
      while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            
      }
      Node *rev=reverse(slow->next);
      Node *temp1=head;

      while(rev!=NULL){
            if(temp1->data!=rev->data){
                  return false;
            }
            temp1=temp1->next;
            rev=rev->next;
      }
      return true;
}

// reverse in K groups
Node *reverseK(Node *head, int k){
      Node *curr=head;
      Node *prv=NULL;
      Node *frw;
      int count=0;

      while(curr!=NULL && count<k){
            frw=curr->next;
            curr->next=prv;

            prv=curr;
            curr=frw;
            count++;
      }

      if(frw!=NULL){
             Node *rem=reverseK(frw,k);
             head->next=rem;

      }
      return prv;
}

main(){
      Node *head=new Node(3);
      Node *temp1=new Node(10);
      Node *temp2=new Node(20);
      head->next=temp1;
      head->next->next=temp2;

      // insertatend(head,30);
      insertatend(head,20);
      insertatend(head,10);
      insertatend(head,3);

      // insertatend(head,60);

      traverse(head);
      cout<<endl; 
      head=reverse(head);
      traverse(head);

      // find_mid(head);

      /* head=reverseK(head,3);
      cout<<endl;
      traverse(head); */

      cout<<endl<<palindrome(head);

}