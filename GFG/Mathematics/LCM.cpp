#include<iostream>
using namespace std;
int gcd(int, int);
int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    
    //naive solution:

    for(int i=max(a,b); i<=a*b;i++){
        if(i%a==0&&i%b==0){
            cout<<"LCM is "<<i<<endl;
            break;
        }
    }

    //efficient solution
    //WKT a*b=LCm(a,b)*gcd(a,b)
    //lcm(a,b)=gcd(a,b)/a*b
    cout<<"LCM is "<<(a*b)/gcd(a,b)<<endl;

}
//gcd function
    int gcd(int m, int n){
        if(n==0) return m;
        else return(gcd(n,m%n));
    }