#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void revcounting(int n){

      // base case
      if(n==0){
            return;
      }
      // processing
      cout<<n<<" ";

      // recursive statement
      revcounting(n-1);
}

void counting(int n){

      // base case
      if(n==0) return;

      // recursive statement
      counting(n-1);
      
      // processing
      cout<<n<<" ";

}

main(){
      revcounting(6);
      cout<<endl;
      counting(6);
}