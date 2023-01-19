#include<bits/stdc++.h>
using namespace std;

// I/P : 1 2 3 4 5   top=1
// O/P : 5 4 3 2 1   top=5

// to insert element at bottom
void insertAtBottom(stack<int>& st, int el){
      // base case
      if(st.empty()){
            st.push(el);
            return;
      }

      // case 1:
      int TopElement =st.top();
       st.pop();

      // recursive call
      insertAtBottom(st,el);

      // backtracking
      st.push(TopElement);

}

void reverse(stack<int>& st){
      if(st.empty()){
            return;
      }

      // case 1:  storing top element 
      int TopElement =st.top();
      st.pop();

      // rec  till stack gets emtpy
      reverse(st);

      // backtrack inserting elements at bottom now to reverse
      insertAtBottom(st,TopElement);
}

main(){
      stack<int> st;
      st.push(5);
      st.push(4);
      st.push(1);
      st.push(7);
      st.push(6);
      st.push(8);

      reverse(st);

      while(!st.empty()){
            cout<<st.top()<<endl;
            st.pop();
      }

      
      

}