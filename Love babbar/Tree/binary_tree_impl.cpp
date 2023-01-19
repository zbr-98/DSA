#include<bits/stdc++.h>
using namespace std;

class Node{
      public:
      int data;
      Node *left, *right;

      Node(int d){
            data=d;
            left=NULL,right=NULL;
      }   
};

// tree formation
Node* buildTree(){
            int d;
            cout<<"Enter value: ";
            cin>>d;

            if(d==-1) return NULL;

            Node *newNode=new Node(d);

            cout<<"Enter left node data for "<<d<<":";
            newNode->left=buildTree();

            cout<<"Enter right node data for "<<d<<":";
            newNode->right=buildTree();

            return newNode;
      }

// preorder traversal
void preorder(Node* &root){
      // order : NLR (Node left right)

      // Base Case
      if(root == NULL)
            return;


      // N
      cout<<root->data<<" ";
      // L
      preorder(root->left);
      // R
      preorder(root->right);
} 

// inorder traversal
void inorder(Node* &root){
      // order : LNR (Left node right)
      
      // base case
      if(root == NULL)
            return;

      // L
      inorder(root->left);

      // N
      cout<<root->data<<" ";

      // R
      inorder(root->right);
} 

// postorder traversal
void postOrder(Node* &root){
      // order : LNR (Left node right)
      
      // base case
      if(root == NULL)
            return;

      // L
      postOrder(root->left);

      // R
      postOrder(root->right);

      // N
      cout<<root->data<<" "; 
} 

// level order traversal

void levelOrder(Node *root){

      queue<Node*> q;
      q.push(root);
      q.push(NULL);

      while(!q.empty()){

            // tu nikl
            Node *front=q.front();
            q.pop();

            // if statements for printing new lines so that to check order in levels
            if(front==NULL){
                  cout<<endl;
                  if(!q.empty()){
                        q.push(NULL);
                  }
            }
            else{
            cout<<front->data<<" ";

            // bche chhor ja
            if(front->left!=NULL)
                  q.push(front->left);
            if(front->right!=NULL)
                  q.push(front->right);
            } 
      }
}
int height(Node *root){
      if(root==NULL) return 0;

      if(root->left==NULL && root->right==NULL){
            return 0;
      }

      int l=height(root->left);
      int r=height(root->right);
      
      return 1+max(l,r);

}

// main function
int main(){
      Node *root=buildTree();

      cout<<"Preorder : ";
      preorder(root);

      cout<<"Inorder : ";
      inorder(root);

      cout<<"Postorder : ";
      postOrder(root);

      cout<<"Level Order Traversal : \n";
      levelOrder(root);

      cout<<"Height of tree= "<<height(root);

      return 0;
}