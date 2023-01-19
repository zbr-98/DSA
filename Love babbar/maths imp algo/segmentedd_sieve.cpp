#include<bits/stdc++.h>
using namespace std;

// Sieve of Eratosthenes method to find prime in range :

int SegS(int m, int n){
      vector<bool> prime(n-m+1,true);
      
      prime[0]= prime[1]=0;
      int cnt=0;

      for(int i=2;i<n+1;i++){
            if(prime[i]){
                  cnt++;
                  // cout<<i<<" ";  to print prime nos.
            }

            for(int j=i*2;j<n+1;j+=i){
                  prime[j]=0;
            }
      }
      return cnt;
}
main(){
      int m,n;
      cout<<"\nEnter m and n : ";
      cin>>m>>n;
      cout<<"\nThere are "<<SegS(m,n)<<" prime numbers between "<<m<<" and "<<n<<"."<<endl<<endl;
}