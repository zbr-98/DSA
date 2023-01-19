#include<iostream>
using namespace std;
int GCDf(int, int);

int main(){
    int M,N,GCD;

//naive method
    cout<<"Enter two numbers:";
    cin>>M>>N;
    if(M==0) GCD=N;
    if(N==0) GCD=M;

    int res=min(M,N);
    for(int i=res;i>0;i--){
        if(M%i==0&&N%i==0){
            GCD =i;
            break;
        }
    }
    cout<<"GCD by naive method is: "<<GCD<<endl;;
    int m=M, n=N;

//Euclidean algorithm
    while(m!=n){
        if(m==0) m=n;
        else if(n==0) break;
        else if(m>n) m=m-n;
        else n=n-m;
    }
    cout<<"GCD by Euclidean Algorithm is: "<<m<<endl;

//Optimized Euclidean Algorithm
   cout<<"GCD by optimized Euclidean Algorithm is: "<<GCDf(M,N);

}
int GCDf(int m,int n){
    if(n==0) return m;
    else return GCDf(n,m%n);
}