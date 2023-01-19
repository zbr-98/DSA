#include <bits/stdc++.h>
using namespace std;

// I/P : }{{}}{{{
// O/P : 3

int countRev(string s)
{
      int n = s.length();
      stack<char> st;

      //  if n is odd, then return -1
      if (n & 1)
            return -1;

      for (int i = 0; i < n; i++)
      {
            if (s[i] == '{')
                  st.push(s[i]);
            else{
                  if (!st.empty()&&st.top()=='{')
                        st.pop();
                  else
                        st.push(s[i]);
            }   
      }

      int a=0,b=0;

      // check how many open braces remaining in stack, then number of closing braces to be reversed will be divided by two and then add count to get result
      while(!st.empty()){
            if(st.top()=='{')
                  a++;
            else
                  b++;
            
            st.pop();
      }
      int ans=(a+1)/2 + (b+1)/2;
      return ans;
}

main()
{
      string s;
      cout << "\nEnter a string with curly braces: ";
      cin >> s;

      cout << "\nMinimum bracket reversal = " << countRev(s) << endl
           << endl;
}
