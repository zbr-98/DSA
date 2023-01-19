#include<iostream>
using namespace std;
bool isprime(int n);

int main(){
    int a,x;
    cout<<"Enter a number:";
    cin>>a;

    //naive solution
    for(int i=2;i<=a;i++){
        if(isprime(i)) x=i;

            while(a%x==0){
                cout<<i<<endl;
                x=x*i;
            }
    }

    cout<<"Efficient solution:\n";

    //efficient solution
    int n=a;
    for(int i=2; i*i<n; i++){
        while(n%i==0){
            cout<<i<<endl;
            n/=i;
        }
    }if(n>1) cout<<n<<endl;

    cout<<"More efficient solution:\n";
    
    //more effiecient solution
    while(a%2==0){
        cout<<2<<endl;
        a/=2;
    }
    while(a%3==0){
        cout<<3<<endl;
        a/=3;
    }
    for(int i=5; i*i<a; i+=6){
        while(a%i==0){
            cout<<i<<endl;
            a/=i;
        }
    }if(a>3) cout<<a;

}

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