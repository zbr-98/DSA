#include<bits/stdc++.h>
using namespace std;

// stack implementation making push operation costly

class stack_Q{
      public:
      queue<int> q;
      /* void push(int x){
            queue<int> q2;
            while(!q.empty()){
                  q2.push(q.front());
                  q.pop();
            }
            q.push(x);
            while(!q2.empty()){
                  q.push(q2.front());
                  q2.pop();
            }
      } */
      // push operation using only one queue
      void push(queue<int> q, int x){
            if(q.empty()){
                  return;
            }
            int num=q.front();
            q.pop();
            push(q,x);
            q.push(x);
            q.push(num);
      }
      int pop(){
            int x=q.front();
            q.pop();
            return x;
      }
      int size(){
            return q.size();
      }
      int top(){
            return q.front();
      }

};

main(){
      stack_Q st;
      st.push(3);
      st.push(4);
      st.push(7);
      st.push(2);

      cout<<st.top()<<endl;
      cout<<st.pop()<<endl;
      st.pop();
      cout<<st.top()<<endl;
      st.push(9);
      cout<<st.top()<<endl;

      cout<<st.size()<<endl;

}