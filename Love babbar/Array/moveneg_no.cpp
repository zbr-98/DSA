#include<iostream>
#include<ostream>
using namespace std;

int* neg(int* arr,int n){
      for(int i=0; i<n; i++){
            for(int j=i;j<n;j++){
                  if(arr[j]<0){
                  int temp=arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
                  }
            }
      }
      return arr;
}
int main(){
      int *arr= new int;
      int n;
      cout<<"\nEnter n:";
      cin>>n;

      cout<<"Enter elements:";
      for(int i=0; i<n;i++){
            cin>>arr[i];
      }

      int* p=neg(arr,n);

      for(int i=0; i<n; i++){
            cout<<*(p+i)<<" ";
      }

      return 0;
}