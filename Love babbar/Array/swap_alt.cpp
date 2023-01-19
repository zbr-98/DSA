#include<iostream>
using namespace std;

void swap(int *m,int *n){
      int *temp=m;
      m=n;
      n=temp;
}

int main(){

      int *arr= new int;
      int n;
      cout<<"\nEnter n:";
      cin>>n;

      cout<<"Enter elements:";
      for(int i=0; i<n-1;i++){
            cin>>arr[i];
      }

      for(int i=0; i<n;i+=2){
            swap(arr[i],arr[i+1]);
      }
      cout<<"\nAfter alternate swapping array is:\n";
      for(int i=0; i<n;i++){
            cout<<arr[i]<<"\t";
      }
}