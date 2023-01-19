#include<bits/stdc++.h>
using namespace std;

void solve(string s,string map[],string& output, int idx,vector<string>& ans){
      // base case
      if(idx>=s.size()){
            ans.push_back(output);
            return;
      }
      int num=s[idx]-'0';
      string keypad=map[num];

      for(int i=0;i<keypad.length();i++){
            output.push_back(keypad[i]);
            solve(s,map,output,idx+1,ans);
            output.pop_back();
      }
}

vector<string> keypad(string s){
      vector<string> ans;
      if(s=="") return ans;
      string map[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
      string output;
      int idx=0;
      solve(s,map,output,idx,ans);
      return ans;
}

main(){
      string s;
      cout<<"Enter string: ";
      getline(cin,s);

      vector<string> ans=keypad(s);

      for(auto it:ans)
                  cout<<"["<<it<<"]"<<"\n";
      

}