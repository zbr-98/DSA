/* Given an integer array nuns, remove the triplet from last. 
The relative order of the elements should be kept the same. */

#include<bits/stdc++.h>
using namespace std;

vector<int> remove_triplets(vector<int>& nums){
      unordered_set<int> arr;
      for(int i=0;i<nums.size();i++){
            arr.insert(nums[i]);
      }
      nums.clear();
      for(auto it:arr){
            nums.push_back(it);
      }
      return nums;
      

}
main(){
      vector<int> nums={1,2,3,3,3,5,6,8,8,8,7};
      for(auto it:remove_triplets(nums)){
            cout<<it<<" ";
      }
}