/*
First negative integer in every window of size k
EasyAccuracy: 54.27%Submissions: 45945Points: 2

Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.



Example 1:

Input :
N = 5
A[] = {-8, 2, 3, -6, 10}
K = 2
Output :
-8 0 -6 -6
Explanation :
First negative integer for each window of size k
{-8, 2} = -8
{2, 3} = 0 (does not contain a negative integer)
{3, -6} = -6
{-6, 10} = -6

 */
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                            long long int n, long long int k);

// Driver program to test above functions
int main()
{
      long long int t, i;
      long long int n;
      cin >> n;
      long long int arr[n];
      for (i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      long long int k;
      cin >> k;

      vector<long long> ans = printFirstNegativeInteger(arr, n, k);
      for (auto it : ans)
            cout << it << " ";
      cout << endl;

      return 0;
}

// } Driver Code Ends

vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K)
{
      vector<long long> ans;
      long long int i, j;
      deque<int> dq;

      for (i = 0; i < K; i++)
      {
            if (A[i] < 0)
            {
                  dq.push_back(i);
            }
      }
      if (dq.size() > 0)
      {
            ans.push_back(A[dq.front()]);
      }
      else
      {
            ans.push_back(0);
      }

      for (int i = K; i < N; i++)
      {
            if (!dq.empty() && i - dq.front() >= K)
            {
                  dq.pop_front();
            }
            if (A[i] < 0)
            {
                  dq.push_back(i);
            }
            if (dq.size() > 0)
            {
                  ans.push_back(A[dq.front()]);
            }
            else
            {
                  ans.push_back(0);
            }
      }
      return ans;
}