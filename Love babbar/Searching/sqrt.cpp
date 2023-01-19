#include<iostream>
#include<vector>
using namespace std;
class solution{
      public:

      float sqrt(int n, int p){
      int s=0;int e=n;
      float ans=-1;

      while(s<=e){
            long m=(s+e)/2;
            long long z=m*m;

            if(z==n){
                  ans=m;
                  break;
            };
            if(z<n){
                  s=m+1;
                  ans=m;
            }
            else e=m-1;
      }
      // for precision
      float increment =1;
      for(int i=0;i<p;i++){
            increment=increment/10;
            while(ans*ans<=n) ans+=increment;

            ans=ans-increment;
      }
      return ans;
}
};

main(){
      int n;
      cout<<"Enter n : ";
      cin>>n;
      solution obj;
      cout<<"Square root of "<<n<<" is : "<<obj.sqrt(n,4)<<endl<<endl;
}