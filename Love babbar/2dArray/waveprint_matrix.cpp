#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
      int n,m;
    
      cout<<"Enter n&m:";
      cin>>n>>m;

      vector< vector<int>> arr;
      
      int a=1;
      for(int i=0;i<n;i++){
            vector<int> temp;
            for(int j=0;j<m;j++){
                  temp.push_back(a++);
            }
            arr.push_back(temp);
      }

      //displaying 2d array
      for(auto q:arr){
            for(auto it:q){
                  cout<<it<<" ";
            }
            cout<<endl;
      }

      //displaying 2d array
      cout<<endl;

      int sr=0, sc=0, er=n-1,ec=m-1;

      int count=0;

      while(sc<=ec){
            
            for(int i=sr;i<=er;i++){
                  cout<<arr[i][sc]<<" ";
            }
            sc++;

            for(int i=er;i>=sr;i--){
                  if(m%2!=0&&sc>=ec) break;
                  cout<<arr[i][sc]<<" ";
            }
            sc++;
      }

      cout<<endl<<endl;

      return 0;
}