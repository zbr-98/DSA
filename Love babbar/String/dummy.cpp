#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int S,E,W;
    cin>>S>>E>>W;
 
    for(S;S<=E;S+=W){
        int C=(5/9)*(S-32);
        cout<<S<<"\t"<<C<<endl;
    }
    return 0;
}
