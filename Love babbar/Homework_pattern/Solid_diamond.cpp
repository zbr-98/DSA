#include<iostream>
using namespace std;

int main(){
    int i, j, n;
    cout<<"Enter n:";
    cin>>n;
    cout<<endl;

    for(i=1;i<=n;i++){
        //spaces1
        for(j=1; j<=n-i;j++) cout<<" ";
        //star1
        for(j=1; j<=i;j++) cout<<"* ";
        
        cout<<endl;
    } 
    for(i=1;i<=n;i++){
        //spaces1
        for(j=1; j<=i-1;j++) cout<<" ";
        //star1
        for(j=1; j<=n-i+1;j++) cout<<"* ";
        
        cout<<endl;
    }

    cout<<endl;
}