#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        int mid=(s+e)/2;
        while(s<=e){
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]) return mid;
            if(arr[mid]<arr[mid-1]) e=mid;
            if(arr[mid]<arr[mid+1]) s=mid;
            
            mid=(s+e)/2;
        }
        return -1;
}

main(){
      vector<int> arr;
      int n,k;
      cout<<"Enter n : ";
      cin>>n;
      cout<<"Enter elements : ";
      for(int i=0;i<n;i++){
            cin>>k;
            arr.push_back(k);
      }
      cout<<peakIndexInMountainArray(arr)<<endl<<endl;
}