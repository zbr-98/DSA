#include<iostream>
using namespace std;

int main(){
    int i, j, n;
    cout<<"Enter n:";
    cin>>n;
    cout<<endl;

//    Solid half pyramid 1 
    int k=3;
    for(i=1;i<=2*n-1;i++){
        if(i<n){
              for(j=1;j<=i;j++) cout<<k;
              k++;
        }else{
              for(j=1;j<=2*n-i;j++)
              cout<<k;
              k--;
        }
        cout<<endl;
    }
    cout<<endl;

    //    Solid half pyramid 2

    for(i=1;i<=n;i++){
          for(j=1;j<=2*i-1;j++){
          if(j%2==0) cout<<"*";
          if(j%2!=0) cout<<i;
          }
        cout<<endl;
        }
      
      for(i=1;i<=n;i++){
            for(j=1;j<=2*n-2*i+1;j++){
            if(j%2==0) cout<<"*";
            if(j%2!=0) cout<<n-i+1;
          }
        cout<<endl;
      }

    cout<<endl;

//    Solid half pyramid 3
    k=1;
    for(i=1;i<=n;i++){
          for(j=1;j<=i;j++){
          if(j<i) cout<<k++<<"*";
          else cout<<k++;
          }
        cout<<endl;
        }

      k-=n;

      for(i=1;i<=n;i++){
            
            for(j=1;j<=n-i+1;j++){
            if(j<n-i+1) cout<<k++<<"*";
            else cout<<k++;
          }
        cout<<endl;
        k=(k+1)-2*(j-1);
      }

    cout<<endl;

    //    Solid half pyramid 4

    for(i=1;i<=n;i++){
          for(j=1;j<i;j++){
            if(i>1){
                if(j==1) cout<<"*";
                if(j>1) cout<<j-1;
            }
          }
          for(j=i-1;j>=1;j--) cout<<j; cout<<"*";
          cout<<endl;
    }
    for(i=1;i<n;i++){
      for(j=1;j<n-i;j++){
        if(i<n-1){
          if(j==1) cout<<"*";
          if(j>1) cout<<j-1;
        }
      }
      for(j=n-i-1;j>=1;j--) cout<<j;
      cout<<"*";
      cout<<endl;
    }
    
}