#include<bits/stdc++.h>
using namespace std;

// stack implementation making pop operation costly
class stack_Q{
      public:
      queue<int> q;
      void push(int x){
            q.push(x);
      }
      int pop(){
            queue<int> q2;
            while(q.size()!=1){
                  q2.push(q.front());
                  q.pop();
            }
            int x=q.front();
            q.pop();
            while(!q2.empty()){
                  q.push(q2.front());
                  q2.pop();
            }
            return x;
      }
      int size(){
            return q.size();
      }
      int top(){
            return q.back();
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