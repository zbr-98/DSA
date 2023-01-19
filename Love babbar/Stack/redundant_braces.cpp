#include<bits/stdc++.h>
using namespace std;

bool findRedundantBrackets(string &s)
{
    stack<char> st;

    for(int i=0;i<s.length(); i++){
        if(s[i]=='('||s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
        st.push(s[i]);
        
        else if(s[i]==')'){
            bool isRed=true;
            while(st.top()!='('){
                if(st.top()=='+'||st.top()=='-'||st.top()=='*'||st.top()=='/')
                    isRed=false;
                st.pop();
            }
            st.pop();
            if(isRed) return true;
        }
    }
    return false;
}

main(){
      string s="((5+2+(3*4)))";

      cout<<findRedundantBrackets(s);
}
