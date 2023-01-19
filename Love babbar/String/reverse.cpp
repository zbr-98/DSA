#include<bits/stdc++.h>
using namespace std;

 void reverseString(vector<char>& s) {
        int st=0;
        int e=s.size()-1;

        while(st<e){
            swap(s[st],s[e]);
            st++;
            e--;
        }
    }

    
    main(){
          int n;
          vector<char> s;
          cout<<"Enter length : ";
          cin>>n;
          cout<<"Enter characters : ";
          for(int i=0;i<n;i++){
                char k;
                cin>>k;
                s.push_back(k);
          }
          cout<<"\nBefore reversing : ";
          for(auto it:s){
                cout<<it;
          }
          
          reverseString(s);
          cout<<"\nAfter reversing : ";
          for(auto it:s){
                cout<<it;
          }
          cout<<endl<<endl;

    }