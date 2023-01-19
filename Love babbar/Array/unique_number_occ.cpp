#include<bits/stdc++.h>
#include<set>
using namespace std;

// using set
bool uniq_occ(vector<int> &arr){
      
      set<int> s;
      for(int i=0;i<arr.size();i++){
            s.insert(arr[i]);   
      }

      cout<<s.size()<<endl;

      return (s.size()==arr.size());

}

// using map
bool uniq_occ2(vector<int> &arr){
      map<int,int> count;
      for(auto i:arr){
            count[i]++;
      }
      set<int> s;
      for(auto i:count){
            s.insert(i.second);
      }
      if(s.size()==count.size()) return true;
      else return false;

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
      bool ans=uniq_occ(arr);
      if(ans) cout<<"True";
      else cout<<"False";

      cout<<endl;
      return 0;
}