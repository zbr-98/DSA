#include<bits/stdc++.h>
using namespace std;

// Given an array of n positive integers and a number k. Find the minimum number of swaps required to bring all the numbers less than or equal to k together. 

main(){
      int n,k,a;
      vector<int> arr;
      cout<<"Enter n:";
      cin>>n;

      cout<<"Enter elements:";
      for(int i=0;i<n;i++){
            cin>>a;
            arr.push_back(a);
      }
      cout<<"Enter k:";
      cin>>k;

      //sliding window approach
      int count=0;
      for(int i=0; i<n;i++){
            if(arr[i]<=k) count++;
      }
      int bad=0;
      for(int i=0;i<count;i++){
            if(arr[i]>k) bad++;
      }
      int ans=bad;
      for(int i=0,j=count;j<n;j++,i++){
            if(arr[i]>k) bad--;
            if(arr[j]>k) bad++;
            ans=min(ans,bad);
      }
      cout<<"Number of swaps is "<<ans;
}