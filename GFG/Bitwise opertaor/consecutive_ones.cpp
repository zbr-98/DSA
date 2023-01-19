#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int N, arr[100],j=0,count=0;
    cout<<"Enter a number: ";
    cin>>N;
    while(N>0){
        if((N&1)!=0){
            count++;
        }else{
            arr[j]=count;
            j++;
            count=0;
        }
        N=N>>1;
    }
    arr[j]=count;

    int max=arr[0];
    for(int i=1; i<=j;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Maximum consecutive ones is: "<<max;

    
    return 0;
}