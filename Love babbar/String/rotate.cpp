// check if string a is rotation of b or not

#include<bits/stdc++.h>
#include<string>

using namespace std;
// Brute force O(N*N)


// string method
bool rot(string a, string b){
      if(a.length()!= b.length()) return false;

      string temp=a+a;
      cout<<temp<<endl;

      if(temp.find(b)==string::npos) return false;

      return true;
}

main(){
      string a,b;
      cout<<"Enter string a : ";
      cin>>a;
      cout<<"Enter string b : ";
      cin>>b;

      if(rot(a,b)) cout<<"\nYes"<<endl<<endl;
      else cout<<"\nNo"<<endl<<endl;
}