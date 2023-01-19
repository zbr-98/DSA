#include<bits/stdc++.h>
using namespace std;

// I/P: ([])   O/P: true
// I/P: ((())  O/P: false
// I/P: [{]}  O/P: false

bool isBalanced(string str){
      stack<char> s;
      for(int i=0;i<str.length();i++){
            if(str[i]=='(' || str[i]=='{' || str[i]=='[') s.push(str[i]);

            else{
                  if(s.empty()) return false;

                  else if(str[i]==')' && s.top()=='(') s.pop();
                  else if(str[i]=='}' && s.top()=='{') s.pop();
                  else if(str[i]==']' && s.top()=='[') s.pop();
                  else
                        return false;
            } 
      } 
      return (s.empty());
}
main(){
      string str;
      cout<<"Enter parenthesis : ";
      getline(cin,str);

      cout<<(isBalanced(str)?"TRUE":"FALSE");

}