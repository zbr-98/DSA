#include <bits/stdc++.h>
using namespace std;

// I/P :  2  1  4  3
// O/P :  1 -1  3 -1


vector<int> nextSmaller(vector<int> a)
{
      int n = a.size();
      stack<int> st;
      vector<int> a1(n,0);
      a1[n-1]=-1;
      st.push(a[n-1]);

      for(int i=n-2;i>=0;i--){

            while(!st.empty() && a[i]<=st.top())
                  st.pop();
                  
            a1[i]=(st.empty())?-1: st.top();

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

      cout<<"Next smaller elements are : ";
      vector<int> nS=nextSmaller(a);

      for(auto it:nS){
            cout<<it<<" ";
      }
      cout<<endl<<endl;

}
