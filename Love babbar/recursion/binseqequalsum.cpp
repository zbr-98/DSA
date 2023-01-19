#include<bits/stdc++.h>
using namespace std;
/* 
I/P : n=2
O/P : 0000 0101 1010 1001 0110 1111

I/P : n=1
O/P : 00 11 

*/

void findsq(int leftsum, int rightsum,char *output, int i, int j){

      if(i>=j){
            if(leftsum==rightsum)
                  cout<<output<<endl;
            return ;
      }

      // put 0,0
      output[i]='0';
      output[j]='0';
      findsq(leftsum,rightsum,output,i+1,j-1);

      // put 0,1
      output[i]='0';
      output[j]='1';
      findsq(leftsum,rightsum+1,output,i+1,j-1);

      // put 1,0
      output[i]='1';
      output[j]='0';
      findsq(leftsum+1,rightsum,output,i+1,j-1);

      // put 1,1
      output[i]='0';
      output[j]='0';
      findsq(leftsum+1,rightsum+1,output,i+1,j-1);
}


main(){
      int n;
      cout<<"Enter n: ";
      cin>>n;

      char *arr=new char[2*n];


      findsq(0,0,arr,0,2*n-1);

      
}