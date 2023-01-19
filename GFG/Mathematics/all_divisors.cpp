#include<iostream>
using namespace std;

int main(){
    int N,x;
    cout<<"Enter a number:";
    cin>>N;

    //naive solution
    for(int i=1; i<=N;i++){
        if(N%i==0) cout<<i<<endl;
    }

    cout<<"Efficient solution:"<<endl;

    //efficient solution
    for(int i=1; i*i<=N; i++){
        if(N%i==0){
            cout<<i<<endl;
            if(i!=N/i) cout<<N/i<<endl;
        }
    }//this will not print divisors in ascending order, thus

    int i; cout<<"Efficient solution in ascending order:"<<endl;

    for(i=1; i*i<N; i++){
        if(N%i==0){
            cout<<i<<endl;
            }
    }
    
    for(;i>=1;i--){
        if(N%i==0) cout<<N/i<<endl;
    }

}