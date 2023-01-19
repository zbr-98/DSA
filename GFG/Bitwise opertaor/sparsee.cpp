#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int flag =0;
    int N;
    cout<<"Enter a number:";
    cin>>N;

    while(N!=0){
        if((N&1)!=0){
            if(((N>>1)&1)!=0)
            flag=1;
        }
        N=N>>1;
    }
    if(flag==1)
    cout<<"Not sparse!!";
    if(flag==0)
    cout<<"Sparse!!";

    return 0;
}
