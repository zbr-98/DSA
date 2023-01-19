#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int binS(int *arr,int n, int k,int s,int e){

      if(s>e) return -1;
      int mid=s+(e-s)/2;
      
      if(arr[mid]>k) return binS(arr,n,k,s,mid-1);
      if(arr[mid]<k) return binS(arr,n,k,mid+1,e);

      return mid;
}

main(){
      int *arr= new int;
      int n,k;
      cout<<"Enter n : ";
      cin>>n;
      cout<<"Enter elements of an array : ";
      for(int i=0;i<n;i++){
            cin>>arr[i];
      }
      cout<<"Enter element you want to search : ";
      cin>>k;

      cout<<binS(arr,n,k,0,n-1);
}