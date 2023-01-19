#include<bits/stdc++.h>
using namespace std;

int bin_search(int *arr,int n, int k){
      
      int st=0;
      int end=n-1;
      int mid=(st+end)/2; //m = s + (e-s)/2;

      while(st<=end){
            int midel=arr[mid];
 
            if(midel==k) return mid;

            if(k<midel){
                  end=mid-1;
            }
            else st=mid+1;
            mid=(st+end)/2;
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
      cout<<"ENter element to be searched : ";
      cin>>k;

      cout<<"Index is : "<<bin_search(arr,n,k)<<endl<<endl;

}