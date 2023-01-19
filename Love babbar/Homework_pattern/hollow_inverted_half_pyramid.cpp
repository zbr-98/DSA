#include<iostream>
using namespace std;

int main(){
    int i, j, n;
    cout<<"Enter n:";
    cin>>n;
    cout<<endl;

    for(i=1;i<=n;i++){
            if(i==1){
                for(j=1; j<=n;j++) cout<<"* ";
            }else 
             for(j=1;j<=n;j++){
                 if(j==1||j==n-i+1) cout<<"* ";
            else cout<<"  ";
             }
        cout<<endl;
        }
        cout<<endl;
}