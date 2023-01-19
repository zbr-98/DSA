 #include<bits/stdc++.h>
#include<iostream>
using namespace std;

int expo(int x, int n){
      if(n==0) return 1;
      int cp=expo(x,n/2);
      if(n&1) return cp*cp*x;
      else return cp*cp;
}

main(){
      cout<<expo(3,3);
} 