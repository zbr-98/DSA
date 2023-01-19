#include<iostream>
using namespace std;

int minimum(int *arr, int n){
      int ans = arr[0];
      for(int i=0;i<n;i++) if(arr[i]<ans) ans=arr[i];
      return ans;
}
int maximum(int *arr, int n){
      int ans = arr[0];
      for(int i=0;i<n; i++)
        if(arr[i]>ans) ans =arr[i];
      return ans;
}

//min in an array
int main(){
      int *arr= new int;
      int n;
      cout<<"\nEnter n:";
      cin>>n;

      cout<<"Enter elements:";
      for(int i=0; i<n;i++){
            cin>>arr[i];
      }

      cout<<"\nMiniumum of array is:"<<minimum(arr,n);
      cout<<"\nMaxiumum of array is:"<<maximum(arr,n)<<endl<<endl;
 
}