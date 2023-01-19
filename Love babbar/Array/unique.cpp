#include<iostream>
#include<vector>
using namespace std;

main(){
      int* arr=new int;
      int n;

      cout<<"Enter n:";
      cin>>n;
      cout<<"Enter elements:";
      for(int i=0; i<n; i++) cin>>arr[i];

      sort(arr, arr+n);

      cout<<flag;
}