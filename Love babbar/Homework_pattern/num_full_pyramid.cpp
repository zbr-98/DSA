#include<iostream>
using namespace std;

int main(){
    int i, j, n;
    cout<<"Enter n:";
    cin>>n;
    cout<<endl;

    int k=1;
    for(i=1;i<=n;i++){
        for(j=1;j<n+i;j++){
            if(j<=n-i) cout<<"  ";
            if(j>n-i&&j<=n) cout<<k++<<" ";
            if(j==n) k--;
            if(j>n&&j<n+i){
                k--;
                cout<<k<<" ";
            }
        }
        cout<<endl;
        k++;
    }
    cout<<endl;

    //other method
    k=1;
    for(i=1;i<=n;i++){
        //spaces
        for(j=1;j<(n-i+1);j++) cout<<"  ";
        //first tri
        for(j=n-i+1,k=i;j<=n;j++,k++) cout<<k<<" ";
        k--;
        //second tri
        for(j=n+1;j<n+i;j++){
            k--;
            cout<<k<<" ";
        }
        cout<<endl;
    }
}