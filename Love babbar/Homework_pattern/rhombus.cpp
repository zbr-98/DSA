#include<iostream>
using namespace std;

int main(){
      int n,i,j;
      cout<<"enter n:";
      cin>>n;

      for(i=1;i<=n;i++){
            for(j=1;j<n-i+1;j++){
                  cout<<" ";
            }
            for(j=1;j<=n;j++){
                  cout<<"* ";
            }
            cout<<endl;
      }
}
