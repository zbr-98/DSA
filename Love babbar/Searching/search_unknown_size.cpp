

#include<bits/stdc++.h>
using namespace std;

int find(int *arr, int s, int e, int k){
      int m;
      while(s<=e){
            m=s+(e-s)/2;
            if(arr[m]==k) return m;
            if(arr[m]>k) e=m-1;
            else s=m+1;
      }
      return -1;
}

int search(int *arr, int k){
      int s=0;
      int e=1;
      int val=arr[0];

      while(val<k){
            s=e;
            e=2*e;
            val=arr[e];
      }
      int ans=find(arr,s,e,k);
      return ans;
}

main(){
      int *arr= new int;
      int n,k;
      cout<<"Enter n: ";
      cin>>n;

      cout<<"Enter elements of array in sortedd order: ";
      for(int i=0;i<n;i++){
            cin>>arr[i];
      }

      cout<<"Enter element to be searched : ";
      cin>>k;
      cout<<"Index is : "<<search(arr,k)<<endl<<endl;

}