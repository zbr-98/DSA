#include<iostream>
using namespace std;

int sum(int arr[],int size){
      if(size==0) return 0;
      
      return arr[0]+sum(arr+1,size-1);
}

int main(){
      int arr[5]={1,2,5,2,3};
      int Sum=sum(arr,5);
      cout<<"Sum is "<<Sum;

      return 0;
}