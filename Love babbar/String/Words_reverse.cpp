// reverse word by word in string

#include<bits/stdc++.h>
using namespace std;


void reverse(string& s){
      int l=s.length();
      for(int i=0,j=l-1;i<j;i++,j--){
            swap(s[i],s[j]);
      }
}
// word by word reverse of characters
void wordbyword(string s){
      string temp;
      int l=s.length();

      for(int i=0;i<=l;i++){
            temp.push_back(s[i]);
            if(s[i]==' '){
                  reverse(temp);
                  cout<<temp;
                  temp.clear();
            }
            if(s[i]=='\0'){
                  reverse(temp);
                  cout<<" "<<temp;
            }
      }
}

// reversing words
void revword(string s){
      string temp;
      int l=s.length();
      for(int j=l-1;j>=0;j--){
            temp.push_back(s[j]);
            if(s[j]==' '){
                  reverse(temp);
                  cout<<temp;
                  temp.clear();
            }
            if(j==0){
                  reverse(temp);
                  cout<<" "<<temp;
            }
      }
}

main(){
      string s;
      cout<<"\nEnter string : ";
      getline(cin,s);

      cout<<"\nAfter reversing words\n";
      revword(s);
      cout<<endl;

      cout<<"\nAfter reversing letters word by word\n";
      wordbyword(s);
      cout<<endl<<endl;
}