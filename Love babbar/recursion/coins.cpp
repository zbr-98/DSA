/* 
Total number of ways to make amount by using array of coins

I/P : {1,2} amount=4;
O/P : 3  (i.e. {1111},{112},{22})
 */

#include<bits/stdc++.h>
using namespace std;

int ways(vector<int> coins, int amount, int currcoin){
      // base case
      if(amount==0) return 1;
      if(amount<0) return 0;

      // using everry coin
      int way=0;
      for(int i=currcoin;i<coins.size();i++){
            way+=ways(coins,amount-coins[i], i);
      }

      return way;
}

main(){
      vector<int> coins;
      int n, amount;
      cout<<"Enter number of coins and amount to be generated: ";
      cin>>n>>amount;

      cout<<"Enter coins : ";
      for(int i=0;i<n;i++){
            int k;
            cin>>k;
            coins.push_back(k);
      }
      cout<<endl<<ways(coins,amount,0);

}