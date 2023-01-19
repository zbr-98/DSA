#include <bits/stdc++.h>
using namespace std;

// largest rectangle in histogram

// I/P :  3  5  1  4  6  3  4  2
// O/P :  12

// we need next smaller index and previous smaller index for this

vector<int> nextSmaller(vector<int> a)
{
      int n = a.size();
      stack<int> st;
      vector<int> a1(n,0);


      for(int i=n-1;i>=0;i--){
            while(st.empty()==false && a[st.top()]>=a[i])
                  st.pop();

            // returning last index +1 if there is no next greater
            a1[i]=st.empty()? n: st.top();
            st.push(i);
      }
      return a1;
}

vector<int> prvsSmaller(vector<int> a){
      int n=a.size();
      stack<int> st;
      vector<int> ans(n,0);

      for(int i=0;i<n;i++){
            while(st.empty()==false && a[st.top()]>=a[i])
                  st.pop();
            
            ans[i]=st.empty()?-1:st.top();

            st.push(i);
      }
      return ans;
}
// area of largest rectangle
int largestRec(vector<int> a){
      vector<int> pS=prvsSmaller(a);
      vector<int> nS=nextSmaller(a);

      int length, breadth,area,n=a.size();
      int maxArea=0;

      for(int i=0;i<n;i++){
            length=a[i];
            breadth=nS[i]-pS[i]-1;
            area=length*breadth;

            if(area>maxArea){
                  maxArea=area;
            }
      }
      return maxArea;
}

/* 
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

      cout<<"Previous smaller elements are : ";
      vector<int> pS=prvsSmaller(a);

      for(auto it:pS){
            cout<<it<<" ";
      }
      cout<<endl<<endl;

      cout<<"Area of largest rectangle of histogram is "<<largestRec(a)<<" square unit."<<endl<<endl;
} */
