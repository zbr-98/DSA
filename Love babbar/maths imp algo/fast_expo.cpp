#include<bits/stdc++.h>
using namespace std;

// Brute Force O(b)
int expo(int a, int b){
      int ans=a;
      for(int i=1;i<b;i++){
            ans*=a;
      }
      return ans;
}

// fast exponentiation O(logb)

// a^b=(a^(b/2))^2
// if b is even a^b=(a^(b/2))^2
// if b is odd a^b=(a^(b/2))^2 * a

int expo1(int x, int n){
      int ans=1;
      while(n>0){
            if(n&1){
                  ans*=x;
            }
            x=x*x;
            n=n>>1;
      }
      return ans;
}

main(){
      int a,b;
      cout<<"Enter a and b : ";
      cin>>a>>b;

      cout<<expo1(a,b);
} 