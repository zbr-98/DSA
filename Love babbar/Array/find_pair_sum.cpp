#include<bits/stdc++.h>
#include<vector>
using namespace std;

//brute force O(n*n)
vector<vector<int>> pairSumB(vector<int> &arr, int s){
   vector<vector<int>> ans;
	
	for(int i=0; i<arr.size();i++){
		for(int j=i+1;j<arr.size();j++){
			if(arr[i]+arr[j]==s){
				vector<int> temp;
				temp.push_back(arr[i]);
				temp.push_back(arr[j]);
				ans.push_back(temp);
			}
		}
	}
	return ans;
}

//two pointers approach  O(nlogn)
vector<vector<int>> pairSum(vector<int> &arr, int k){
   vector<vector<int>> ans;
   int s=0,e=arr.size()-1;
   sort(arr.begin(),arr.end());

      while(s<e){
      if(arr[s]+arr[e]==k){
         vector<int> temp;
	   temp.push_back(arr[s]);
	   temp.push_back(arr[e]);
	   ans.push_back(temp);
         s++;
         e--;
      }
      else if(arr[s]+arr[e]<k) s++;
      else e--;
      }
   return ans;
}

main(){
      vector<int> arr;
      int n,k,i,j,a;

      cout<<"\nEnter n:";
      cin>>n;

      cout<<"Enter elements:";
      for(int i=0; i<n;i++){
            cin>>a;
            arr.push_back(a);
      }
      cout<<"Enter value: ";
      cin>>k;

      vector<vector<int>> ans =pairSumB(arr,k);

	for(auto q: ans) {
        for(auto it: q) {
            cout<<it<<" ";
         } 
         cout<<endl;
     }
      return 0;
}