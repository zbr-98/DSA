#include<bits/stdc++.h>
using namespace std;

main(){
      int A[]={1,2,3,4,5,6,7,8,9,10};

//   O/P: A[]={10,1,9,2,8,3,7,4,6,5};
   
      int arr[10];
      for(int i=0,j=9,k=0;k<10;i++,j--){
            arr[k++]=max(A[i],A[j]);
            arr[k++]=min(A[i],A[j]);
      }
      
      for(int i=0;i<10;i++){
            A[i]=arr[i];
      }

      for(int i=0;i<10;i++){
            cout<<A[i]<<" ";
      }
}