//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
/* 
First non-repeating character in a stream
MediumAccuracy: 51.34%Submissions: 58822Points: 4
Lamp
This problem is part of GFG SDE Sheet. Click here to view more.  

Given an input stream of A of n characters consisting only of lower case alphabets. The task is to find the first non repeating character, each time a character is inserted to the stream. If there is no such character then append '#' to the answer.
 
Example 1:

Input: A = "aabc"
Output: "a#bb"
Explanation: For every character first non
repeating character is as follow-
"a" - first non-repeating character is 'a'
"aa" - no non-repeating character so '#'
"aab" - first non-repeating character is 'b'
"aabc" - first non-repeating character is 'b'

 */
// } Driver Code Ends
class Solution
{
public:
      string FirstNonRepeating(string A)
      {
            unordered_map<char, int> mp;
            queue<char> q;
            int l = A.length();
            string ans;

            for (int i = 0; i < l; i++)
            {
                  mp[A[i]]++;
                  q.push(A[i]);

                  while (!q.empty())
                  {
                        if (mp[q.front()] > 1)
                        {
                              q.pop();
                        }
                        else
                        {
                              ans.push_back(q.front());
                              break;
                        }
                  }
                  if (q.empty())
                        ans.push_back('#');
            }
            return ans;
      }
};

//{ Driver Code Starts.
int main()
{

      string A;
      cin >> A;
      Solution obj;
      string ans = obj.FirstNonRepeating(A);
      cout << ans << "\n";

      return 0;
}
// } Driver Code Ends