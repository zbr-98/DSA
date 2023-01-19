#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
      int i=0, z0, z1, a,c,m,n;
      int b[100];

      cout<<"Enter z0(seed value) : ";
      cin>>z0;

      cout<<"Enter a(constant multiplier) : ";
      cin>>a;

      cout<<"Enter the value of c(increment) : ";
      cin>>c;

      cout<<"Enter the value of m(modulus) : ";
      cin>>m;

      cout<<"Enter the number of terms you want to generate : ";
      cin>>n;


      while(i++<=n){
            z1=(a*z0 + c)% m;
            cout<<z1<<"\t";
            z0=z1;
      }
      return 0;
}
