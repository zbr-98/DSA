#include<iostream>
#include<ostream>
using namespace std;

pair<int, int> maxmin(int *arr, int n){
      int mini=INT_MAX;
      int maxi= INT_MIN;
      for(int i=0;i<n;i++){
            maxi= max(maxi,arr[i]);
            mini= min(mini, arr[i]);
      }
      pair<int, int> p=make_pair(maxi,mini);
      return p;
}

//min in an array
int main(){
      int *arr= new int;
      int n;
      cout<<"\nEnter n:";
      cin>>n;

      cout<<"Enter elements:";
      for(int i=0; i<n;i++){
            cin>>arr[i];
      }

      pair<int,int> p=maxmin(arr,n);
      cout<<"Maximum: "<<p.first<<endl;
      cout<<"Minimum: "<<p.second;
 
}