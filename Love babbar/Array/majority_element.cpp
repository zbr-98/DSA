/*
Given an array A of N elements. 
Find the majority element in the array. 
A majority element in an array A of size N is an element that appears more than N/2 times in the array.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
      public:

      //brute force O(N²)
      int majorityElement(vector<int> a){
        
        for(int i=0; i<a.size(); i++){
            int count=0;
            for(int j=i;j<a.size();j++){
                if(a[i]==a[j]) count++;
            }
            if(count>(a.size()/2)) return a[i];
        }
        return -1;
    }

     //Using hashmap O(N)
     int majorityEl2(vector<int> a){
        unordered_map<int, int> m;

        for(auto it:a){
            m[a[it]]++;
        }
        for (int i = 0; i < a.size(); i++)
            if(m[a[i]]>a.size()/2) return a[i];
        
        return -1;
    }

      //Using sorting method O(N*logN)
      int majorityEl3(vector<int> a){
        sort(a.begin(),a.end());

        int count=1;
        for(int i=1; i<a.size(); i++){
            if(a[i-1]==a[i]) count++;
            else count=1;
            if(count>a.size()/2)
                  return a[i-1];
        }
        
        return -1;
    }
};
// { Driver Code Starts.

int main(){

      int k,n;
      cout<<"\nEnter n: ";

      cin >> n;
      vector<int> a;

      cout<<"Enter elements in array: ";

      for(int i = 0;i<n;i++){
        cin>>k;
        a.push_back(k);
      }

      Solution obj;
      cout << obj.majorityElement(a) << endl;
      cout << obj.majorityEl2(a) << endl;
      cout << obj.majorityEl3(a) << endl;


    return 0;
}