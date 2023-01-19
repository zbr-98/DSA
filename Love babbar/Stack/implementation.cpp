#include <bits/stdc++.h>
using namespace std;

// array implementation
class Stack
{
public:
      int *array;
      int cap, top;

      Stack(int c)
      {
            cap = c;
            array = new int[cap];
            top = -1;
      }
      void push(int x)
      {
            if (top >= cap - 1)
            {
                  cout << "Stack is full";
                  return;
            }
            top++;
            array[top] = x;
      }
      int pop()
      {
            if (top == -1)
            {
                  cout << "Stack is empty";
                  return -1;
            }
            int res = array[top];
            top--;
            return res;
      }
      int peek()
      {
            if (top == -1)
            {
                  cout << "Stack is empty";
                  return -1;
            }
            return array[top];
      }
      int size()
      {
            return top + 1;
      }
      bool isEmpty()
      {
            return (top == -1);
      }
};

// vector implementation for dynamic stack
class StackV{

public:
      vector<int> arr;

      void push(int d){

            arr.push_back(d);
      }

      int pop(){
            int res = arr.back();
            arr.pop_back();
            return res;
      }
      int peek(){

            if (arr.empty())
            {
                  cout << "Staack is emtpy";
                  return -1;
            }
            return arr.back();
      }
      int size(){
            return arr.size();
      }
      bool isEmpty()
      {
            return arr.empty();
      }
};

// implementation using linked list
// just insert at head and delete at head

class Node{
      public:
      int data;
      Node *next;
      Node(int d){
            data=d;
            next=NULL;
      }
};
class stackLL{
      public:
      Node *head;
      int sz;
      stackLL(){head=NULL; sz=0;}
      void push(int d){
            Node *temp=new Node(d);
            temp->next=head;
            head=temp;
            sz++;
      }
      int pop(){
            if(head==NULL) return -1;

            int res=head->data;
            Node *temp=head;
            head=head->next;
            delete(temp);
            sz--;
            return  res;
      }
      int size(){return sz;}
      bool isEmpty(){return (head==NULL);}

      int peek(){
            return head->data;
      }

};

main()
{
      Stack s(1);
      s.push(5);
      cout << s.pop() << endl;
      cout << s.peek() << endl;

      StackV s1;
      cout << s1.peek() << endl;
      s1.push(3);
      cout << s1.peek() << endl;
      s1.push(5);
      cout << s1.peek() << endl;
      s1.pop();
      cout << s1.size() << endl;
      cout << (s1.isEmpty()?"Empty":"Not empty")<< endl;

      stackLL s2;
      s2.push(9);
      s2.push(7);
      s2.push(2);
      s2.push(3);
      s2.push(1);

      cout<<s2.peek()<<endl;
      cout<<s2.pop()<<endl;
      cout<<s2.peek()<<endl;
      cout<<s2.size()<<endl;
      s2.pop();
      s2.pop();
      s2.pop();
      cout<<(s2.isEmpty()?"Empty":"Not empty")<<endl;


}