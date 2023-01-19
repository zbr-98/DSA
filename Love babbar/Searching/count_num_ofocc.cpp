#include<bits/stdc++.h>
using namespace std;

int first_occ(int *arr,int n, int k){
      
      int st=0;
      int end=n-1;
      int ans=-1;
      int mid;
      while(st<=end){
            mid=(st+end)/2; //m = s + (e-s)/2;
            int midel=arr[mid];
            if(midel==k){
                  ans = mid;
                  end=mid-1;
            };

            if(k<midel){
                  end=mid-1;
            }
            if(k>midel){
                  st=mid+1;
            }
      }
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
      cout<<"ENter element to be searched : ";
      cin>>k;

      // efficiient method
      int count=0;
      int res=first_occ(arr,n,k);
      int i=res;
      while(i<n&&arr[i]==k){
            count++;
            i++;
      }
      cout<<"Number of occurrence of "<<k<<" is: "<<count<<endl<<endl;

      // other method is to find frist and last occurence and then subtractit +1..

}