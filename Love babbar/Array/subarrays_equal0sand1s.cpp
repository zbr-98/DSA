#include<bits/stdc++.h>
using namespace std;

main(){
      int n,a;
      vector<int> arr;
      cout<<"Enter n:";
      cin>>n;

      cout<<"Enter elements:";
      for(int i=0;i<n;i++){
            cin>>a;
            arr.push_back(a);
      }

      int count=0;
      // Brute Force (n*n)

      //setting zeros with -1
      for(int i=0; i<n; i++){
            if(arr[i]==0) arr[i]=-1;
      }

      for(int i=0; i<n;i++){
            int sum=0;
            for(int j=i; j<n; j++){
                  sum+=arr[j];
                  if(sum==0) count++;
            }
      }
      cout<<count;

      //to print all subarrays
      for(int i=0; i<n; i++){
            if(arr[i]==0) arr[i]=-1;
      }

      for(int i=0; i<n;i++){
            int sum=0;
            for(int j=i; j<n; j++){
                  sum+=arr[j];
                  if(sum==0) count++;
            }
      }
      // Hashmap approach
      
}