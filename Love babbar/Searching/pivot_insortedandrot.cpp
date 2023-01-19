// pivot element of sorted and rotated array

#include<bits/stdc++.h>
using namespace std;

int bin_search(int *arr,int n){
      
      int st=0;
      int end=n-1;
      int mid;

      while(st<=end){
            mid=(st+end)/2; //m = s + (e-s)/2;
            if(arr[mid]>arr[mid+1]) return mid;

            if(arr[mid]<arr[mid-1]) return mid-1;

            if(arr[st]>=arr[mid]) end=mid-1;
            else st=mid+1;
      }
      
      return -1;
}

int bin_search1(int *arr,int n){
      
      int st=0;
      int end=n-1;
      int mid;

      while(st<=end){
            mid=(st+end)/2; //m = s + (e-s)/2;
            if(arr[st]>arr[mid]) end=mid;
            else st=mid+1;
      }
      
      return st;
}

main(){
      int *arr= new int;
      int n;
      cout<<"Enter n: ";
      cin>>n;

      cout<<"Enter elements of array in sortedd order: ";
      for(int i=0;i<n;i++){
            cin>>arr[i];
      }

      cout<<"Pivot element is : "<<arr[bin_search(arr,n)]<<endl<<endl;
      cout<<"Pivot element is : "<<arr[bin_search1(arr,n)]<<endl<<endl;

}