#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
      int n;
    
      cout<<"Enter n:";
      cin>>n;

      vector< vector<int>> arr;
      
      int a=1;
      for(int i=0;i<n;i++){
            vector<int> temp;
            for(int j=0;j<n;j++){
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

      int strow=0, stcol=0, endrow=n-1, endcol=n-1;
      int count=0;

      while(strow<=endrow&&stcol<=endcol){

      for(int i=stcol;i<=endcol;i++){
      cout<<arr[strow][i]<<" ";
      }
      strow++;

      for(int i=strow;i<=endrow;i++){
            cout<<arr[i][endcol]<<" ";
      }
      endcol--;

      for(int i=endcol;i>=stcol;i--){
            cout<<arr[endrow][i]<<" ";
      }
      endrow--;

      for(int i=endrow;i>=strow;i--){
            cout<<arr[i][stcol]<<" ";
      }
      stcol++;
      }
      

      cout<<endl<<endl;

      return 0;
}