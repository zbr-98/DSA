#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int max(int *arr,int i, int n, int maxi){
      if(i==n) return maxi;

      int ans;

      if(arr[i]>maxi){
            maxi=arr[i];
            ans=max(arr,i+1,n,maxi);
      }
      else ans=max(arr,i+1,n,maxi);

      return ans;
}

main(){
      int *arr= new int;
      int n;
      cout<<"Enter n : ";
      cin>>n;
      cout<<"Enter elements of an array : ";
      for(int i=0;i<n;i++){
            cin>>arr[i];
      }

      cout<<max(arr,1,n,arr[0]);

}