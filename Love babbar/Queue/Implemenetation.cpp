#include<bits/stdc++.h>
using namespace std;


class Queue{
      int size,cap,*arr;
      public:
      Queue(int c){
            cap=c;
            size=0;
            arr=new int[cap];
      }

      bool isFull(){
            return (size==cap);
      }

      bool isEmpty(){return (size==0);}

      void enque(int x){
            if(isFull()) return;
            arr[size]=x;
            size++;
      }

      void deque(){
            if(isEmpty()) return;

            for(int i=0;i<size-1;i++)
                  arr[i]=arr[i+1];

            size--;
      }

      int getfront(){
            if(isEmpty()) return -1;

            else
                  return 0;
      }

      int getrear(){
            if(isEmpty()) return -1;
            else return size-1;

      }

};
// efficient implementation (using circular array)
// circular queue
class QueueE{
      public:
      int *arr,front,cap,size;
      Queue(int c){
            arr=new int[c];
            cap=c;
            front=0;
            size=0;
      }
      int getFront(){
            if(isEmpty()) return -1;
            else return front;
      }
      int getRear(){
            if(isEmpty()) return -1;
            else
                  return (front+size-1)%cap;
      }
      bool isFull(){
            return (size==cap);
      }
      bool isEmpty(){
            return (size==0);
      }

      void enque(int x){
            if(isFull()) return;

            int rear=getRear();
            rear=(rear+1)%cap;
            arr[rear]=x;
            size++;
      }

      void deque(){
            if(isEmpty()) return;

            front=(front+1)%cap;
            size--;
      }
};

// implementation using linked list

class Node{
      public:
      int data;
      Node *next;
      Node(int d){
            data=d;
            next=NULL;
      }
};
class QueueLL{
      public:
      Node *front, *rear;
      int size;
      QueueLL(){
            front=rear=NULL;
            size=0;
      }
      void enque(int x){
            Node *temp=new Node(x);
            if(front==NULL){
                  front=rear=temp;
                  return;
            }
            rear->next=temp;
            rear=temp;
            size++;
      }
      void deque(){
            if(front==NULL) return;
            Node *temp=front;
            front=front->next;
            if(front==NULL){
                  rear=NULL;
            }
            delete temp;
            size--;
      }
      int getSize(){
            return size;
      }
      
};
