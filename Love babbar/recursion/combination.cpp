#include <bits/stdc++.h>
using namespace std;

void solve(string s, string output, int idx, vector<string> &ans)
{
      // base case
      if (idx== s.length())
      {
            ans.push_back(output);
            return;
      }
      // no sapce
            output.push_back(s[idx]);
            solve(s, output, idx + 1, ans);
            
            // space
            output.push_back(' ');
            if(s[idx+1]!='\0')
                  solve(s, output, idx + 1, ans);
            
}

vector<string> combination(string s)
{
      vector<string> ans;
      int idx = 0;
      string output;
      solve(s, output, idx, ans);
      return ans;
}

main()
{
      string s;
      getline(cin, s);

      vector<string> ans = combination(s);

      cout<<"\nAll combinations are:";
      for (auto it : ans)
            cout << "\n"<< it
                 ;
}