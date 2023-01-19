#include<bits/stdc++.h>
using namespace std;

void solve(string s,int idx ,vector<string>& ans){
      // base case
      if(idx>=s.length()-1){
            ans.push_back(s);
            return;
      }
      // logic
      for(int i=idx;i<s.length();i++){
            swap(s[idx],s[i]);
            // rec
            solve(s,idx+1,ans);
            // backtrack
            swap(s[idx],s[i]);

      }
}

vector<string> permutation(string s){
      vector<string> ans;
      int idx=0;
      solve(s,idx,ans);
      return ans;
}

main(){
      string s;
      cout<<"Enter string: ";
      getline(cin,s);

      vector<string> ans=permutation(s);

      cout<<"\nAll permutations are:\n";
      for(auto it:ans)
                  cout<<it<<"\n";
      
}