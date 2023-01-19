#include<bits/stdc++.h>
using namespace std;

void findMiddle(stack<int> st, int Size){

      // base case
      if(st.size()==(Size/2) + 1){
            cout<<"Middle element is "<<st.top()<<"."<<endl;
            return;
      }

      // case 1:
      int topElement = st.top();
      st.pop();

      // recursive case 
      findMiddle(st,Size);

      // backtracking
      st.push(topElement);

}

main(){
      stack<int> st;
      st.push(5);
      st.push(4);
      st.push(1);
      st.push(7);
      st.push(6);
      st.push(8);

      findMiddle(st,st.size());
      while(!st.empty()){
            cout<<st.top()<<endl;
            st.pop();
      }

      
      

}