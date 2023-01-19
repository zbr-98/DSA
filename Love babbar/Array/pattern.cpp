#include<bits/stdc++.h>
using namespace std;
/* 
1*2*3*10*11*12
--4*5*8*9
----6*7
 */

main(){
      int n;
      cin>>n;
      int k=1;
      int l=n*n+1;
      for(int i=1;i<=n;i++){
            for(int j=1;j<i;j++){
                  cout<<"--";
            }
            for(int j=1;j<=2*(n-i)+1;j++){
                  if(j%2!=0)
                        cout<<k++;
                  else
                        cout<<"*";
            }
            
            for(int j=2*n;j<=4*n-2*i+1;j++){
                  if(j%2==0)
                        cout<<"*";
                  else
                        cout<<l++;
            }
            // for(int j=1;j<=)
            cout<<endl;
            l=n*n-i;
      }
}