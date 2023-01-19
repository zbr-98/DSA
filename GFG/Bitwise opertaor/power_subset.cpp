#include<iostream>
#include<math.h>

using namespace std;
int main(){
    cout<<"Enter a string: ";
    string str;
    cin>>str;
    cout<<endl<<"Subset of string "<<str<<" is:"<<endl;

    int n=str.length();
    int power = pow(2,n);
    for(int counter=0; counter<power; counter++){
        for(int j=0; j<n; j++){
            if((counter&(1<<j))!=0){
                cout<<str[j];
            }
        }
        cout<<endl;
    }
    return 0;
}