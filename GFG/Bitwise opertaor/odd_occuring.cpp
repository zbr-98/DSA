#include<bits/stdc++.h>
using namespace std;

/*Given an array of n number that has values in range (1...n+1).
Every number appears exactly once. Hence, one number is missing.
Find the missing number.*/

int main(){
    int res=0, term =0, result;
    int arr[50], N;

    cout<<"Enter N:";
    cin>>N;

    cout<<"Enter elements of array:"<<endl;
    for(int i=0; i<N; i++) cin>>arr[i];

    for(int i=1; i<=N+1; i++) term = term^(i);
    for(int i=0; i<N; i++)  res = (res)^(arr[i]);

    result =term^res;

    cout<<result;

    return 0;
}

