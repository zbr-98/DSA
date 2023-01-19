#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> diff(vector<int> arr1, vector<int> arr2, int target){
      // sort(arr1);
      // sort(arr2);
      vector<vector<int>> ansnf={{-1,-1}};
      vector<int> output;
      vector<vector<int>> ans;
      for(int i=0,j=arr2.size()-1;i<arr1.size();i++,j--){
                  if(arr1[i]-arr2[j]==target){
                        output.push_back(i);
                        output.push_back(j);
                  }
                  if(output.size()==2){
                        ans.push_back(output);
                        break;
                  }
      }
      if(ans.size()<2)
            return ansnf;
      return ans;
      
}

main(){
      vector<int> arr1={3,7,6,9};
      vector<int> arr2={2,1,3,14};
      int k=4;
      for(auto it:diff(arr1,arr2,k)){
            
            for(auto q:it){
                  cout<<q<<" ";
            }
            cout<<endl;
      }

}