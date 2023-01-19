#include<bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string str)
    {
        map<char,int> m;
        for(int i=0;i<str.length();i++){
            m[str[i]]++;
        }
        for(auto it=m.begin();it!=m.end();it++){
              cout<<it->first<<" : "<<it->second<<endl;;
        }

        int maxi=0;
        // find largest freq maxi
        for(auto it=m.begin();it!=m.end();it++){
            maxi=max(maxi,it->second);
        }
        cout<<"max = "<<maxi<<endl;
        char mini=122;
        
        // if map has largest count find minmum char
        for(auto it=m.begin();it!=m.end();it++){
              if(it->second==maxi){
                    cout<<it->first<<endl;
                    mini=min(mini,it->first);
              }
        }
            
        cout<<"min = "<<mini<<endl;
        return mini;
    }

    main(){
          string str;
          cout<<"Enter string : ";
          cin>>str;
          getMaxOccuringChar(str);
          cout<<endl<<endl;
    }