#include<iostream>
#include<math.h>
using namespace std;
int factorial(int);
int nCr(int, int);

int main(){
    int i, j, n;
    cout<<"Enter n:";
    cin>>n;
    cout<<endl;

//pascal triangle
/*
1
1 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
*/
    for(i=0;i<n;i++){
          for(j=0;j<=i;j++)
          cout<<nCr(i,j)<<" ";
          cout<<endl;
    }
    cout<<endl<<endl;

}

int factorial(int n){
      if(n==0||n==1) return 1;
      else return n*factorial(n-1);
}

int nCr(int n, int r){
      return factorial(n)/((factorial(n-r)*factorial(r)));
};
