#include<iostream>
using namespace std;

int main(){
    int i, j, n;
    cout<<"Enter n:";
    cin>>n;
    cout<<endl;

    //1. half pyramid
    for(i=1;i<=n;i++){
        int k=1;
        for(j=1;j<=i;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //2. inverted half pyramid
    for(i=1;i<=n;i++){
        int k=1;
        for(j=1;j<=n-i+1;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    //3. hollow half pyramid

    for(i=1;i<=n;i++){
        int k=1;
        if(i<n){
            cout<<1;
            for(j=1;j<i;j++) cout<<"  ";
            if(i>1) cout<<i;
            }else for(j=1;j<=i;j++) cout<<k++<<" ";

        cout<<endl;
    }
    cout<<endl;

    //4. hollow inverted half pyramid
    int k;
    for(i=1;i<=n;i++){
        k=i;
        for(j=1;j<=n-i+1;j++,k++){
           if(i==1) cout<<k<<" "; 
           if(i>1){
               if(j==1||j==n-i+1) cout<<k<<" ";
               else cout<<"  ";
           }
        }
        cout<<endl;
    }
    cout<<endl;

    //5. hollow full pyramid
    for(i=1;i<=n;i++){
        int k=1;
        if(i<n){
        for(j=1;j<=n-i;j++) cout<<" ";
        cout<<1;
        for(j=n-i+2;j<n+i-1;j++) cout<<" ";
        if(i>1) cout<<i;
        }
        if(i==n) for(j=1;j<=n;j++) cout<<k++<<" ";

        cout<<endl;
    }
    cout<<endl;

    return 0;
}