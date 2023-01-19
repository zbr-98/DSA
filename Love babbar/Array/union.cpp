#include<iostream>
using namespace std;

//function for union
pair<int*,int> union12(int *arr1,int m, int *arr2, int n){
      int *arr3=new int;
      int i=0,j=0,k=0;
      
      while(i<m&&j<n){
            if(arr1[i]<arr2[j]){
                  arr3[k]=arr1[i];
                  i++;
                  k++;
            }
            if(arr1[i]==arr2[j]){
                  arr3[k]=arr1[i];
                  i++;
                  j++;
                  k++;
            }
            if(arr1[i]>arr2[j]){
                  arr3[k]=arr2[j];
                  j++;
                  k++;
            }
      }

      while(i<m){
            arr3[k++]=arr1[i];
            i++;
      }
      while(j<n){
            arr3[k++]=arr2[j];
            j++;
      }

      pair<int*, int> p=make_pair(arr3,k);
      return p;
}

//function for intersection
pair<int*, int> intersec(int* arr1,int m, int* arr2, int n){
      int i=0, j=0, k=0;
      int *arr3=new int;
      
      while(i<m&&j<n){
            if(arr1[i]==arr2[j]){
                  arr3[k]=arr1[i];
                  k++;
                  i++;
                  j++;
            }
            if(arr1[i]>arr2[j]) j++;
            if(arr1[i]<arr2[j]) i++;
      }
      pair<int*, int> p=make_pair(arr3,k);
      return p;
}


int main(){
      int *arr1= new int;
      int *arr2=new int;
      int m,n;
      cout<<"\nEnter m&n:";
      cin>>m>>n;

      cout<<"Enter elements of array 1: ";
      for(int i=0; i<m;i++){
            cin>>arr1[i];
      }

      cout<<"Enter elements of array 2: ";
      for(int i=0; i<n;i++){
            cin>>arr2[i];
      }
      pair<int*, int> p=union12(arr1,m,arr2,n);
      
      cout<<"\nUnion elements are: ";
      for(int i=0;i<p.second;i++){
            cout<<*((p.first)+i)<<" ";
      } cout<<endl;

      pair<int*, int> s=intersec(arr1,m,arr2,n);
      
      cout<<"\nIntersecting elements are: ";
      for(int i=0;i<s.second;i++){
            cout<<*((s.first)+i)<<" ";
      }

      cout<<endl<<endl;
      return 0;
}