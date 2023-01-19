#include<bits/stdc++.h>
using namespace std;
bool colsearch(int **arr,int m, int n, int row,int k){
      int s=0;
      int e=n-1;
      int mid= (s+e)/2;
      
      while(s<=e){
            if(arr[row][mid]==k){
                  cout<<"Index is : "<<row<<" "<<mid<<endl<<endl;
                  return true;
            }
            if(arr[row][mid]<k) s=mid+1;
            else e=mid-1;
            mid=(s+e)/2;
      }
      return false;
}
bool bin_search(int **arr, int m, int n, int k){

      int s=0;
      int e=m-1;

      int mid=(s+e)/2; //m = s + (e-s)/2;

      while(s<=e){
            mid=(s+e)/2;
            if(arr[mid][0]==k){
                  cout<<"Index is : "<<mid<<" "<<0<<endl<<endl;
                  return true;
            }
            if(arr[mid][n-1]==k){
                  cout<<"Index is : "<<mid<<" "<<(n-1)<<endl<<endl;
                  return true;
            }
            if(k<arr[mid][0]){
                  e=mid-1;
            }
            if(k>arr[mid][n-1]) s=mid+1;

            if(k>arr[mid][0]&&k<arr[mid][n-1]){
                  bool ans=colsearch(arr,m,n,mid,k);
                  return ans;
            }
      }
      return false;
}

main(){

      int m,n,k,t;
      cout<<"Enter m&n: ";
      cin>>m>>n;
      
      int **arr= new int*[m];

      cout<<"Enter elements of 2D-array in sorted order: ";
      for(int i=0;i<m;i++){
            arr[i]= new int[n];
            for(int j=0;j<n;j++)
                  cin>>arr[i][j];
      }

      cout<<"2d array is :\n";
      for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                  cout<<arr[i][j]<<" ";
            }
            cout<<endl;
      }
      cout<<"Enter element to be searched : ";
      cin>>t;

      bin_search(arr,m,n,t);

}