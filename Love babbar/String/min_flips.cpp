// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
/* 
Given a binary string, that is it contains only 0s and 1s. We need to make this string a sequence of alternate characters by flipping some of the bits, our goal is to minimize the number of bits to be flipped.

Example 1:

Input:
S = "001"
Output: 1
Explanation: 
We can flip the 0th bit to 1 to have
101.



 */
int minFlips (string s);
int32_t main()
{
        string s; cin >> s;
        int min=minFlips (s);
        cout << "\nMinimum flips : "<<min << endl<<endl;
}


char expected(char e){
    if(e=='0') return '1';
    else return '0';
}

int minFlips (string S){
    int count0=0;
    int count1=0;
    char exp0='0';
    char exp1='1';
    
    for(int i=0;i<S.length();i++){
        if(S[i]!=exp0)
            count0++;
            
        cout<<"Count0 = "<<S[i]<<" "<<exp0<<" "<<count0<<"\n";
        exp0=expected(exp0);
    }
    for(int i=0;i<S.length();i++){
        if(S[i]!=exp1){
            count1++;
            
        }
        cout<<"Count1 = "<<S[i]<<" "<<exp1<<" "<<count1<<"\n";
        exp1=expected(exp1);
    }
    int count=min(count0,count1);
    
    return count;
}