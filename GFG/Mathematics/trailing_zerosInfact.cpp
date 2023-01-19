#include<iostream>
using namespace std;

int main(){
    int N,count=0;
    cout<<"Enter N:";
    cin>>N;

//naive method
    long int fac=1;
    for(int i=1; i<=N; i++){
        fac*=i;
    }
    cout<<"Factorial is: "<<fac;
    while(fac%10==0){
        count++;
        fac/=10;
    }
    cout<<endl<<"NUmber of zeros are: "<<count;

//efficient method
    int res=0;
    for(int i=5; i<=N; i*=5){
        res+=N/i;
    }
    cout<<"Number of zeros are: "<<res;

}
