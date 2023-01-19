#include<iostream>
#include<array>
using namespace std;

// Sorting an arrray of 0 1 and 2
int main(){

      int *arr= new int;
      int n;
      cout<<"\nEnter n:";
      cin>>n;

      cout<<"Enter elements:";
      for(int i=0; i<n;i++){
            cin>>arr[i];
      }

      int count0=0,count1=0,count2=0;

      for(int i=0; i<n; i++){
             if(arr[i]==0) count0++;
             else if(arr[i]==1) count1++;
             else count2++;
      } 
      int i=0;
      while(count0--){
            arr[i]=0;
            i++;
      }    
      while(count1--){
            arr[i]=1;
            i++;
      }       
      while(count2--){
            arr[i]=2;
            i++;
      }          

      cout<<"\nAfter sorting, an array is:\n";
      for(int i=0; i<n;i++){
            cout<<arr[i]<<"\t";
      }
}