/* 
Remove Zero Sum Consecutive Nodes from Linked List
 */
/* 
Input: head = [1,2,-3,3,1]
Output: [3,1]
Note: The answer [1,2,1] would also be accepted.
 */
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
Node *solve(Node *&head, bool &anyChange){
      int sum=0;
      if(head==NULL) return head;

      Node *temp=head;
      while(temp!=NULL){
            sum+=temp->data;
            if(sum==0) break;
            temp=temp->next;
      }
      if(sum==0){
            anyChange=true;
            return temp->next;
      }
      if(temp==NULL){
            head->next=solve(head->next,anyChange);
      }
      return head;
}
Node *removezerosum(Node *head){
      while(true){
            bool anyChange=false;
            head=solve(head,anyChange);
            if(head==NULL||anyChange==false)
                  break;
      }
      return head;
}
main(){
      Node *head=new Node(1);
      insertatend(head,2);
      insertatend(head,3);
      insertatend(head,-3);
      insertatend(head,4);

      traverse(head);
      head=removezerosum(head);
      traverse(head);

}



