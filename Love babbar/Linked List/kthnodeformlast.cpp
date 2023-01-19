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
// kth node from last
// approach1: reverse and find kth
// approach2: find length and then find k-length+1 th node
// approach3: two pointer with diff of k ✅
// approach4: recursion

// approach3
int kthfromlast(Node *head,int k){
      if(k==0) return -1;
      Node *i=head;
      Node *j=head;
      while(k--){
            j=j->next;
      }

      while(j!=NULL){
            i=i->next;
            j=j->next;
      }
      return i->data;
}
// approach4: rec
int kthfromlastR(Node *&head,int k){
      if(head==NULL) return 0;

      
      int count=kthfromlastR(head->next,k);
      count++;
      if(count==k)      
            cout<<head->data;
      return count;

}
main(){
      

      Node *head=new Node(4);
      insertatend(head,3);
      insertatend(head,5);
      insertatend(head,2);
      insertatend(head,11);
      insertatend(head,7);

      traverse(head);

      // cout<<kthfromlast(head,2);
      cout<<endl;
      kthfromlastR(head,2);


}