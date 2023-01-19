#include <bits/stdc++.h>
using namespace std;


int celebrity(vector<vector<int>> a, int n){
      stack<int> st;
      for(int i=0;i<n;i++){
            st.push(i);
      }

      while(st.size()>1){
            int first=st.top();
            st.pop();

            int second = st.top();
            st.pop();

            if(a[first][second]==1)
                  st.push(second);
                  else
                        st.push(first);
      }
      int celeb=st.top();

      bool checkRow=true;
      for(int i=0;i<n;i++){
            if(a[celeb][i]==1){
                  checkRow=false;
                  break;
            }
      }
      bool checkCol=true;
      for(int i=0;i<n;i++){
            if(i!=celeb && a[i][celeb]==0){
                  checkCol=false;
                  break;
            }
      }
      if(checkRow&&checkCol)
            return celeb;
      
      return -1;
}

main()
{
      vector<vector<int>> a;
      int s,n;

      cout << "\nEnter number of row of people in a pawri: ";
      cin >> n;

      cout<<"Enter 0 or 1:\n";
      for(int i=0;i<n;i++){
            vector<int> a1;
            for(int j=0;j<n;j++){
                  int k;
                  cin>>k;
                  a1.push_back(k);
            }
            a.push_back(a1);
      }

      cout<<"The celebrity is : "<<celebrity(a,n);

      cout<<endl<<endl;

}
