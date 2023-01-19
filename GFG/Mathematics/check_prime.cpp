#include<iostream>
using namespace std;
bool isprime(int);
bool isprime_(int);

int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;


    //naive solution
    
    int flag =1;
    if(a==1) flag=0;
    for(int i=2; i*i<=a;i++){
        if(a%i==0){
            flag=0;
            break;
        }
    }

    if(flag==1) cout<<"Prime\n";
    else cout<<"Non prime\n";

    if(isprime(a)==1)
    cout<<"Prime\n";else cout<<"Non prime\n";


    if(isprime_(a)==1)
    cout<<"Prime";else cout<<"Non prime";
}


//using bool function
bool isprime(int n){
    if(n==1)
     return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
            break;
        }
    }
     return true;
}

//more efficient solution
bool isprime_(int n){
    if(n==1) return false;
    if(n==2||n==3) return true;
    if(n%2==0||n%3==0) return false;
    for(int i=5; i*i<=n; i+=6){
        if(n%i==0||n%(i+2)==0){
            return false;
            break;
        }
    }
    return true;
}