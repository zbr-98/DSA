#include<bits/stdc++.h>
using namespace std;


/* vector<int> common(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3){
      vector<int> arr4;
      int i=0,j=0,k=0;

      while(i<arr1.size()&&j<arr2.size()&&k<arr3.size()){
            if(arr1[i]==arr2[j]&&arr2[j]==arr3[k]){
                  arr4.push_back(arr1[i]);
                  i++;
                  j++;
                  k++;
            }
            else if(arr1[i]<arr2[j]) i++;
            else if(arr2[j]<arr3[k]) j++;
            else k++;
            
      }
      return arr4;
};
 */
// using hashmap
vector<int> common(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3){
      vector<int> arr4;
      int n1=arr1.size(),n2=arr2.size(),n3=arr3.size();
      unordered_map<int,int> count;
      int i;
      for(i=0;i<n1;i++){
            count[arr1[i]]++;
      }
      for(i=0;i<n2;i++){
            count[arr2[i]]++;
      }
      for(i=0;i<n3;i++){
            count[arr3[i]]++;
      }

      for(auto it:count){
            if(it.second>2){
                  arr4.push_back(it.first);
            }
      }

      return arr4;
};

main(){
      vector<int> arr1;
      vector<int> arr2;
      vector<int> arr3;
      
      int l,m,n,a;
      cout<<"\nEnter l,m & n : ";
      cin>>l>>m>>n;

      cout<<"Enter elements of arr1 : ";
      for(int i=0; i<l;i++){
            cin>>a;
            arr1.push_back(a);
      }
      cout<<"Enter elements of arr2 : ";
      for(int i=0; i<m;i++){
            cin>>a;
            arr2.push_back(a);
      }
      cout<<"Enter elements of arr3 : ";
      for(int i=0; i<n;i++){
            cin>>a;
            arr3.push_back(a);
      }
      cout<<"Common elements are: ";
      vector<int> arr4 =common(arr1,arr2,arr3);
      for(auto it:arr4){
            cout<<it<<" ";
      }
            

      return 0;
}