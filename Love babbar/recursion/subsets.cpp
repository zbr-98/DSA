#include<bits/stdc++.h>
using namespace std;

void solve(string s,string output, int idx,vector<string>& ans){
      // base case
      if(idx>=s.size()){
            ans.push_back(output);
            return;
      }

      // exclude
      solve(s,output,idx+1, ans);

      // include
      output+=s[idx];
      solve(s,output,idx+1,ans);

}

vector<string> powerset(string s){
      vector<string> ans;
      string output;
      int idx=0;
      solve(s,output,idx,ans);
      return ans;
}

main(){
      string s;
      cout<<"Enter string: ";
      getline(cin,s);

      vector<string> ans=powerset(s);

      for(auto it:ans)
                  cout<<"["<<it<<"]"<<"\n";
      

}