

#include<bits/stdc++.h>
using namespace std;

//Brute force O(N*N)
string array_subset(int *a1,int *a2,int m,int n){
      int i,j;
      for(j=0;j<n;j++){
            for(i=0;i<m;i++){
                  if(a2[j]==a1[i]){
                        break;
                  }
            }
            if(i==m) return "No";
      }
      return "Yes";
}

// Set method O(N) 
string array_subset1(int *a1,int *a2,int m,int n){
      unordered_set<int> S;

      for(int i=0;i<m;i++){
            S.insert(a1[i]);
      }
      int k=S.size();
      for(int i=0;i<n;i++){
            S.insert(a2[i]);
      }
      if(S.size()==k) return "\nYes";
      else return "\nNo";

}

// SET find method O(N*logN)
string array_subset2(int *a1,int *a2,int m,int n){
      unordered_set<int> S;

      for(int i=0;i<m;i++){
            S.insert(a1[i]);
      }
      for(int i=0;i<n;i++){
            if(S.find(a2[i])==S.end()) return "\nNo";
      }
      return "\nYes";

}

int main(){

      int m,n;
      cout<<"Enter m: ";
      cin >> m;
      int a1[m];

      cout<<"Enter n: ";
      cin >> n;
      int a2[n];

      cout<<"Enter elements of a1 : ";
      for(int i = 0;i<m;i++) cin >> a1[i];

      cout<<"Enter elements of a2 : ";
      for(int i = 0;i<n;i++) cin >> a2[i];

      cout<<array_subset(a1,a2,m,n);
      cout<<array_subset1(a1,a2,m,n);
      cout<<array_subset2(a1,a2,m,n);
      


    return 0;
}