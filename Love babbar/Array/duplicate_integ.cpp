#include<iostream>
using namespace std;

int dup(int* arr,int n){
      for(int i=0; i<n; i++) if(arr[i]==i) return (i);
      return -1;
}
//OR
//int dup(int n)

main(){
      int *arr= new int;
      int n;
      cout<<"\nEnter n: ";
      cin>>n;

      cout<<"Enter elements: ";
      for(int i=0; i<n;i++){
            cin>>arr[i];
      }
      
      cout<<dup(arr,n);

      return 0;
}