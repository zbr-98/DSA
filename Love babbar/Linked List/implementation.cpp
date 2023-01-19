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

main(){
      Node *head=new Node(3);
      Node *temp1=new Node(10);
      Node *temp2=new Node(20);
      head->next=temp1;
      head->next->next=temp2;
      cout<<head<<" "<<head->data<<" "<<head->next->data<<" "<<temp2->data;
}
// OR
/* 
main(){
      Node *head=new Node(3);
      head->next=new Node(10);
      head->next->next=new Node(20);
      
}
 */