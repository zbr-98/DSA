#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int A, B,X;
    cout<<"Enter A:";
    cin>>A;
    cout<<"Enter B:";
    cin>>B;

    X=A^B;
    int count =0;
    while(X>0){
        X=X&(X-1);
        count++;
    }
    cout<<endl<<"Number of flips required to convert "<<A<<" to "<<B<<" is: "<<count;

}