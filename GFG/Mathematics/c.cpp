#include<iostream>
using namespace std;
int main(){
    long long int x =3000000000;
    if(x<INT_MAX||x>INT_MIN){
        cout<<0;
    }else cout<<1;
    
}