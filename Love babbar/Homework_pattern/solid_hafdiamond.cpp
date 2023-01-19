#include<iostream>
using namespace std;

int main(){
    int i, j, n;
    cout<<"Enter n:";
    cin>>n;
    cout<<endl;

    for(i=1;i<=2*n-1;i++){
        for(j=1;j<=n;j++){
            if(i<=n){
                if(j<=i) cout<<"*";
                else cout<<" ";
            }
            else{
                if(j<=2*n-i) cout<<"*";
                else cout<<" ";
                }
        }
        cout<<endl;
    }
    cout<<endl;
}