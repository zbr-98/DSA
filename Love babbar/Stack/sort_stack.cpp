#include<bits/stdc++.h>
using namespace std;

/* I/P  O/P

   4    6
   3    5
   6    4
   2    3
   5    2
*/

// to insert element in sorted order
void sortInsert(stack<int>& st, int el){

      // base case
      if( st.empty() || st.top()<el){
            st.push(el);
            return;
      }

      // case 1:
      int TopElement =st.top();
      st.pop();

      // recursive call
      sortInsert(st,el);

      // backtracking
      st.push(TopElement);

}

void sortStack(stack<int>& st){

      // base case
      if(st.empty()){
            return;
      }

      // case 1:  storing top element 
      int TopElement =st.top();
      st.pop();

      // rec  till stack gets emtpy
      sortStack(st);

      // backtracking
      sortInsert(st,TopElement);
}

main(){
      stack<int> st;
      st.push(5);
      st.push(4);
      st.push(1);
      st.push(7);
      st.push(6);
      st.push(8);

      sortStack(st);

      while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
      }
}