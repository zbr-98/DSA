#include<bits/stdc++.h>
using namespace std;

main(){
      int n,a;
      vector<int> arr;
      cout<<"\nEnter n:";
      cin>>n;

      cout<<"Enter elements:";
      for(int i=0;i<n;i++){
            cin>>a;
            arr.push_back(a);
      }

      //Brute Force O(n*n)
      /* for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                  if(arr[i]==arr[j]){
                        cout<<"\nFirst repeating number is "<<arr[i]<<endl<<endl;
                        i=j=n;
                        break;
                  }
            }
      }*/
      // Hashmap approach O(n)
      unordered_map<int,int> count;
      for(int i=0; i<n; i++){
            count[arr[i]]++;
      }
      for(int i=0; i<n; i++){
            int curr=arr[i];
            if(count[curr]>1){
                  cout<<"\nFirst repeating number is "<<arr[i]<<endl<<endl;
                  break;
            }
      }
}