#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int i, j, n;
    cout<<"Enter n:";
    cin>>n;
    cout<<endl;

//hackerrank spiral
/*
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/
    for(i=1;i<=n;i++){
          int k=n;
          for(j=1;j<=n;j++){
                if(j<i) cout<<k--<<" ";
                else cout<<k<<" ";
          }
          for(j=1;j<n;j++){
                if(j>n-i) cout<<++k<<" ";
                else cout<<k<<" ";
          }
          cout<<endl;
    }
    for(i=1;i<n;i++){
          int k=n;
          for(j=1;j<=n;j++){
                if(j<n-i) cout<<k--<<" ";
                else cout<<k<<" ";
          }
          for(j=1;j<n;j++){
                if(j>=i) cout<<k++<<" ";
                else cout<<k<<" ";
          }
          cout<<endl;
    }
    cout<<endl<<endl;

    //other method
    for(i=1;i<=n;i++){
          int k=n;
          for(j=1;j<=2*n-1;j++){
                cout<<k<<" ";
                if(j<i) k--;
                if(j>=2*n-i) k++;
          }
          cout<<endl;
    }
    for(i=1;i<n;i++){
          int k=n;
          for(j=1;j<=2*n-1;j++){
                cout<<k<<" ";
                if(j<n-i) k--;
                if(j>=n+i) k++;
          }
          cout<<endl;
    }
    cout<<endl<<endl;
  
}