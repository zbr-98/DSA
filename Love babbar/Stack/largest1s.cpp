#include<D:\Desktop\DSA programs C++\Love babbar\Stack\histogram_prob.cpp>
#include<bits/stdc++.h>
using namespace std;

/* I/P : 0 0 1 1
         0 1 1 1
         1 1 1 0
         0 1 1 0
  O/P :6
*/

int largest1rect(vector<vector<int>> a){
      int r=a.size();
      int c=a[0].size();

      int res=largestRec(a[0]);

      for (int i = 1; i < r; i++){
            for (int j = 0; j < c; j++)
                  if(a[i][j]==1)
                        a[i][j]+=a[i-1][j];
                  
            res=max(res,largestRec(a[i]));
      }

      return res;
}

int main(){

      vector<vector<int>> a;
      int r,c;
      cout<<"Enter number of rows and column: ";
      cin>>r>>c;

      cout<<"Enter elements in matrix a:\n";
      for(int i=0;i<r;i++){
            vector<int> a1;
            for(int j=0;j<c;j++){
                  int k;
                  cin>>k;
                  a1.push_back(k);
            }
            a.push_back(a1);
      }

      cout<<"Largest area of rectangle with ones's is "<<largest1rect(a)<<endl<<endl;
      return 0;
}
