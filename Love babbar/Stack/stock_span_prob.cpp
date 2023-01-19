#include <bits/stdc++.h>
using namespace std;
/* 
The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate the span of stocks price for all n days. 
The span Si of the stocks price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}.

Example 1:

Input: 
N = 7, price[] = [100 80 60 70 60 75 85]
Output:
1 1 1 2 1 4 6
Explanation:
Traversing the given input span for 100 
will be 1, 80 is smaller than 100 so the 
span is 1, 60 is smaller than 80 so the 
span is 1, 70 is greater than 60 so the 
span is 2 and so on. Hence the output will 
be 1 
 */
// I/P :  13 15 12 14 16 8 6 4 10 30
// O/P :   1  2  1  2  5 1 1 1  4 10

// I/P :  25 20 15 10
// O/P :   1  1  1  1

// brute force
vector<int> stockSpan(vector<int> a)
{
      int n = a.size();
      vector<int> a1(n,0);
      a1[0]=1;

      for(int i=1;i<n;i++){
            int count=1;
            for(int j=i-1;j>=0;j--){
                  if(a[j]<a[i])
                        count++;

                  if(a[j]>a[i]) break;  
            }
            a1[i]=count;
      }
      return a1;
}

// efficient method using stack
vector<int> stockSpanE(vector<int> a)
{
      int n = a.size();
      vector<int> a1(n,0);
      stack<int> st;
      st.push(0);

      for(int i=0;i<n;i++){
            while(!st.empty() && a[i]>=a[st.top()]){
                  st.pop();
            }
            a1[i]=st.empty()?i+1:i-st.top();

            st.push(i);
      }
      return a1;
}

// previous greater element using same algorithm
vector<int> prvsGreater(vector<int> a)
{
      int n = a.size();
      vector<int> a1(n,0);
      stack<int> st;
      st.push(0);

      for(int i=0;i<n;i++){
            while(!st.empty() && a[i]>= st.top()){
                  st.pop();
            }
            a1[i]=st.empty()?-1:st.top();

            st.push(a[i]);
      }
      return a1;
}

main()
{
      vector<int> a;
      int s,n;

      cout << "\nEnter number of elements you want into an array: ";
      cin >> n;

      cout<<"\nEnter elements: ";
      for(int i=0;i<n;i++){
            cin>>s;
            a.push_back(s);
      }

      cout<<"Stock span elements are : ";
      vector<int> nS=prvsGreater(a);

      for(auto it:nS){
            cout<<it<<" ";
      }
      cout<<endl<<endl;

}
