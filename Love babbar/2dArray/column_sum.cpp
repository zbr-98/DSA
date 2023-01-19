#include<bits/stdc++.h>
using namespace std;

main(){
      int arr[3][3]={1,3,5,2,4,7,6,8,2};

      //displaying 2d array
      cout<<endl;
      for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                  cout<<arr[i][j]<<" ";
                  }
                  cout<<endl;
      }

      //column sum
      int ans;
      for(int j=0;j<3;j++){
            int sum=0;
            for(int i=0;i<3;i++){
                  sum+=arr[i][j];
            }
            ans=max(ans,sum);
            cout<<sum<<" ";
      }
      cout<<"\nMaximum sum is: "<<ans;


      cout<<endl<<endl;

}