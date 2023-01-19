#include<bits/stdc++.h>
using namespace std;

void reverse(queue<int>& q){
      if(q.empty()) return;

      int element=q.front();
      q.pop();

      reverse(q);

      q.push(element);
}

main(){
      queue<int> q1;
      q1.push(10);
      q1.push(20);
      q1.push(7);
      q1.push(8);
      q1.push(40);

/*       while(!q1.empty()){
            cout<<q1.front()<<" ";
            q1.pop();
      }
      cout<<endl; */

      // using stack
      stack<int> st;
      while(!q1.empty()){
            st.push(q1.front());
            q1.pop();
      }
      while(!st.empty()){
            q1.push(st.top());
            st.pop();
      }

      // using recursion
      reverse(q1);

      while(!q1.empty()){
            cout<<q1.front()<<" ";
            q1.pop();
      }


      

}
