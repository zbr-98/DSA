#include<bits/stdc++.h>
using namespace std;

// implementing two stacks in an array

class twostacks{
      int *arr, top1, top2, size;

      public:
      twostacks(int n){
            arr=new int[n];
            size=n;
            top1=-1,top2=n;
      }
      void push1(int x){
            if(top2-top1>1){
                  top1++;
                  arr[top1]=x;
            }
            else{
                  cout<<"Stack overflow\n\n";
                  exit(1);
            }
      }
      void push2(int x){
            if(top2-top1>1){
                  top2--;
                  arr[top2]=x;
            }
            else{
                  cout<<"Stack overflow\n\n";
                  exit(1);
            }
      }
      int pop1(){
            if(top1<0){
                  cout<<"Stack underflow\n\n";
                  exit(1);
            }
            else{
                  int x=arr[top1];
                  top1--;
                  return x;
            }
      }
      int pop2(){
            if(top2>=size){
                  cout<<"Stack underflow\n\n";
                  exit(1);
            }
            else{
                  int x=arr[top2];
                  top2++;
                  return x;
            }
      }
      int tos1(){
            if(top1<0){
                  cout<<"Stack is empty\n\n";
                  exit(1);
            }
            else{
                  int x=arr[top1];
                  return x;
            }
      }

      int tos2(){
            if(top1<0){
                  cout<<"Stack underflow\n\n";
                  exit(1);
            }
            else{
                  int x=arr[top2];
                  return x;
            }
      }
};
main(){
      twostacks tws(5);
      tws.push1(32);
      cout<<tws.tos1()<<endl;
      tws.push2(34);
      cout<<tws.tos2()<<endl;
      tws.push1(37);
      tws.push1(39);
      tws.push1(41);
      cout<<tws.tos1()<<endl;
      tws.pop2();
      cout<<tws.tos2()<<endl;
      tws.push1(44);
      tws.pop2();
      
}
