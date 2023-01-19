#include<bits/stdc++.h>
using namespace std;

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int stcol=0,strow=0,endcol=matrix[0].size()-1,endrow=matrix.size()-1;

        while(stcol<=endcol && strow<=endrow){
            for(int i=stcol;i<=endcol;i++){
                res.push_back(matrix[strow][i]);
            }
            strow++;
            for(int i=strow;i<=endrow;i++){
                res.push_back(matrix[i][endcol]);
            }
            endcol--;
            for(int i=endcol;i>=stcol;i--){
                res.push_back(matrix[endrow][i]);
            }
            endrow--;
            for(int i=endrow;i>=strow;i--){
                res.push_back(matrix[i][stcol]);
            }
            stcol++;
        }
        return res;
    }


main(){
      vector<vector<int>> matrix={
            {1,2,3},{4,5,6},{7,8,9}
      };
      for(auto it:matrix){
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<endl;
      }
      
      vector<int> ans=spiralOrder(matrix);
      for(auto it:ans){
            cout<<it<<" ";
      }
}