#include<bits/stdc++.h>
using namespace std;

// Sieve of Eratosthenes method  /time:  O(n*log(logn))
                              //   /space: O(n)

int SOE(int n){
      vector<bool> prime(n+1,true);
      
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
      int n;
      cout<<"\nEnter n : ";
      cin>>n;
      cout<<"\nThere are "<<SOE(n)<<" prime numbers between 1 and "<<n<<"."<<endl<<endl;
}