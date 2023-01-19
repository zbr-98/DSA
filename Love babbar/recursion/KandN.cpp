/*You are given ‘K’ and ‘N’ and you have to do the following:- 
Output all possible combinations of arrays whose elements sum is equal to ‘N’ and you can use only elements in the range 1 to 9 inclusive and you can use each element only once and the size of the combination should be ‘K’. 
Two combinations are called different if there is an element that is in one combination and not in another.
INPUT: K = 2, N = 5
OUTPUT: [[1, 4], [2, 3]]

  */
#include<bits/stdc++.h>
using namespace std;

void solve(int K, int N, int arr[],vector<int> output,vector<vector<int>> ans, int currno,int sum){
      if(output.size()==K){
            if(sum==N){
                  ans.push_back(output);
                  return;
            }
            if(sum!=N){
                  return;
            }
      }
      for(int i=currno;i<9;i++){
            sum=sum+arr[currno];
            output.push_back(arr[currno]);
            KandN(K,N,arr,output,ans,currno+1,sum);
            output.pop_back();
      }
}
vector<vector<int>> KandN(int K, int N, int arr[]){
      vector<int> output;
      vector<vector<int>> ans; 
      int currno=0,sum=0;
      solve(K,N,arr,output,ans,currno,sum);
      return ans;
}

main(){
      int K, N;
      cout<<"Enter K and N: ";
      cin>>K>>N;

      vector<vector<int>> ans; 

      int arr[]={1,2,3,4,5,6,7,8,9};

      ans=KandN(K,N,arr);

      for(auto it:ans){
            for(auto q:it){
                  cout<<q<<" ";
            }
            cout<<endl;
      }

}