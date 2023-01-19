#include<iostream>
using namespace std;

int main(){
    int i, j, n;
    cout<<"Enter n:";
    cin>>n;
    cout<<endl;

//     PAlindrome pyramid 1
    for(i=1;i<=n;i++){
      int k=1;
       for(j=1; j<=2*i-1;j++){
             if(j<i) cout<<k++<<" ";
             if(j>=i) cout<<k--<<" ";
       }
        cout<<endl;
    }

    cout<<endl<<endl;

//     PAlindrome pyramid 2

    for(i=1;i<=n;i++){
      char k='A';
       for(j=1; j<=2*i-1;j++){
             if(j<i) cout<<k++<<" ";
             if(j>=i) cout<<k--<<" ";
       }
        cout<<endl;
    }

    cout<<endl;

//     PAlindrome pyramid 3

    for(i=1;i<=n;i++){
        for(j=1;j<2*n-i;j++) cout<<"*";
        for(j=2*n-i;j<2*n;j++) cout<<i<<"*";
        for(j=1;j<2*n-i;j++) cout<<"*";
        cout<<endl;
    }
    cout<<endl;

}