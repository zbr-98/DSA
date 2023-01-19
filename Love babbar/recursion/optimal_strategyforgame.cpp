/* Consider a row of n coins of values v1 . . . vn, where n is even. We play a game against an opponent by alternating turns. In each turn, a player selects either the first or last coin from the row, removes it from the row permanently, and receives the value of the coin. Determine the maximum possible amount of money we can definitely win if we move first.
Note: The opponent is as clever as the user.
*/
#include<bits/stdc++.h>
using namespace std;

int optimalstrategy(vector<int> arr, int i,int j){
      // base case
      if(i>=j){
            return 0;
      }
      // choice 1
      int choice1=arr[i]+min(optimalstrategy(arr,i+2,j),optimalstrategy(arr,i+1,j-1));
      // choice 2
      int choice2=arr[j]+min(optimalstrategy(arr,i+1,j-1),optimalstrategy(arr,i,j-2));

      int ans=max(choice1, choice2);
      return ans;
}

main(){
      vector<int> arr;
      int n;
      cout<<"Enter n:";
      cin>>n;

      cout<<"Enter elements : ";
      for(int i=0;i<n;i++){
            int k;
            cin>>k;
            arr.push_back(k);
      }
      cout<<endl<<optimalstrategy(arr,0,n-1);



}