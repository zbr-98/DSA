#include<bits/stdc++.h>
#include<string>
using namespace std;

string removeOccurrences(string s, string part) {
        int i;
        int l=part.length();
        cout<<"length: "<<l<<endl;

        while(true){
            i=s.find(part);
            if(i==-1) break;
            cout<<"i = "<<i<<endl;
            s.erase(i,l);
        }
        cout<<s<<endl;
        return s;
}
// main
main(){
      string s,part;
      cout<<"Enter s : ";
      cin>>s;
      cout<<"Enter part : ";
      cin>>part;

      removeOccurrences(s,part);

}