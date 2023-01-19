#include<bits/stdc++.h>
#include<vector>
using namespace std;

//brute froce (N³)
// vector<vector<int>> tripletsum(vector<int> &arr, int a){
//       vector<vector<int>> ans;
      
//       sort(arr.begin(),arr.end());

//       for(int i=0; i<arr.size(); i++){
//             for(int j=i+1;j<arr.size();j++){
//                   for(int k=j+1;k<arr.size();k++){
//                         if(arr[i]+arr[j]+arr[k]==a){
//                               vector<int> temp;
//                               temp.push_back(arr[i]);
//                               temp.push_back(arr[j]);
//                               temp.push_back(arr[k]);
//                               ans.push_back(temp);
//                         }
//                   }
//             }
//       }
//       return ans;
// }

//two pointers approach O(N²)
vector<vector<int>> tripletsum(vector<int> &arr, int target){
      vector<vector<int>> ans;
      sort(arr.begin(),arr.end());

      for(int i=0; i<arr.size();i++){
            int newtarget=target-arr[i];

            int s=i+1, e=arr.size()-1;

            while(s<e){
                  if(arr[s]+arr[e]==newtarget){
                        vector<int> temp;
                        temp.push_back(arr[i]);
	                  temp.push_back(arr[s]);
	                  temp.push_back(arr[e]);
	                  ans.push_back(temp);
                        s++;
                        e--;
                  }
                  else if(arr[s]+arr[e]<newtarget) s++;
                  else e--;
            }

      }
      return ans;
}

main(){
      vector<int> arr;
      int n,k,a;

      cout<<"\nEnter n:";
      cin>>n;

      cout<<"Enter elements:";
      for(int i=0; i<n;i++){
            cin>>a;
            arr.push_back(a);
      }
      cout<<"Enter value: ";
      cin>>k;
      
      vector<vector<int>> ans=tripletsum(arr,k);

      for(auto q: ans) {
        for(auto it: q) {
            cout<<it<<" ";
         } 
         cout<<endl;
     }

      cout<<endl;
      return 0;
}