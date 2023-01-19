#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

// using linear search O(N)
int fixed_point(int *arr,int n){
      for(int i=0;i<n;i++){
            if(i==arr[i]) return i;
      }
      return -1;
}

// Using inary Search O(N*logN)
int fixed_point1(int *arr,int n){
      int st=0;
      int end=n-1;
      int mid=(st+end)/2; //m = s + (e-s)/2;

      while(st<=end){
 
            if(arr[mid]==mid) return mid;

            if(mid<arr[mid]){
                  end=mid-1;
            }
            else st=mid+1;
            mid=(st+end)/2;
      }
      return -1;
}

// 
/* int fixed_point2(int *arr,int n){
      int st=0;
      int end=n-1;
      int mid=(st+end)/2; //m = s + (e-s)/2;

      while(st<=end){
 
            if(arr[mid]==mid) return mid;
      }
      return -1;
} */

main(){
      int *arr= new int;
      int n;
      cout<<"Enter n: ";
      cin>>n;

      cout<<"Enter elements of array in sortedd order: ";
      for(int i=0;i<n;i++){
            cin>>arr[i];
      }
      // cout<<fixed_point(arr,n);
      cout<<fixed_point1(arr,n);


}