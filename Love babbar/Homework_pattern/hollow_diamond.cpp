#include<iostream>
using namespace std;

int main(){
    int i, j, n;
    cout<<"Enter n:";
    cin>>n;
    cout<<endl;

    for(i=1;i<=2*n;i++){
        for(j=1;j<=2*n-1;j++){
            if(i<=n){
                if(j==n-i+1||j==n+i-1) cout<<"*";
                else cout<<" ";
            }
            if(i>n){
                if(j==i-n||j==3*n-i) cout<<"*";
                else cout<<" ";
                }
        }
        cout<<endl;
    }
    cout<<endl;
}