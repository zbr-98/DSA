#include<bits/stdc++.h>
#include<string>
using namespace std;

int compress(vector<char>& chars) {
        string s;
        string ch;

        
        for(int i=0;ch[i];i++){
              ch.push_back(chars[i]);
              s.append(ch);
              int n=1;
              while(chars[i]==chars[i+1]){
                    n++;
                    i++;
              }
              s.append('n');

        }
    }

main(){
      int n,k;
      vector<char> chars;
      
      cout<<"Enter n : ";
      cin>>n;

      cout<<"Enter characters : ";
      for(int i=0;i<n;i++){
            cin>>k;
            chars.push_back(k);
      }

      compress(chars);

}