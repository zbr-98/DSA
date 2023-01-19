// pivot element of sorted and rotated array

#include<bits/stdc++.h>
using namespace std;

int pivot(int *arr,int n){
      
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

int search(int *arr,int n, int k){
      int s=0;int e=n-1;
      int p=pivot(arr,n);
      int mid;
      if(k>arr[s]) e=p;
      if(k<=arr[s]) s=p+1;
      
      while(s<=e){
            mid=(e+s)/2;
            if(arr[mid]==k) return mid;
            if(arr[mid]>k) e=mid-1;
            else s= mid+1;
      }
      return -1;
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

      cout<<"Pivot element is : "<<arr[pivot(arr,n)]<<endl<<endl;
      cout<<"Enter element to be searched : ";
      cin>>k;
      cout<<"Index is : "<<search(arr,n,k)<<endl<<endl;

}