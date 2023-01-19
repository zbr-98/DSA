#include<bits/stdc++.h>
using namespace std;

main(){
      int n,k,a;
      vector<int> arr;
      cout<<"Enter n:";
      cin>>n;

      cout<<"Enter elements:";
      for(int i=0;i<n;i++){
            cin>>a;
            arr.push_back(a);
      }

      int flag=1;
      for(int i=0; i<n/2;i++)
            if(arr[i]!=arr[n-i-1]){
                  flag=0;
                  break;
            }
                  
                  
      if(flag==1) cout<<"Palindrome!";
       else cout<<"Not palindrome!";

}