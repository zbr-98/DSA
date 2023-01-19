#include<bits/stdc++.h>
#include<string.h>

using namespace std;
/* 
Enter first String: Race
Enter second String: Care
Race and Care are anagram.
 */
// freq mehtod
bool anagram(string a, string b){
      int freq[26]={0};

      for(int i=0;i<a.size();i++){
            int idx=a[i]-'a';
            freq[idx]++;
      }

      for(int i=0;i<b.size();i++){
            int idx=b[i]-'a';
            freq[idx]--;
      }
      for(int idx=0;idx<26;idx++){
            if(freq[idx]!=0) return false;
      }
      return true;
}
// hashmap method
bool anagram1(string a, string b){
      map<char,int> m;

      for(int i=0;i<a.size();i++){
            m[a[i]]++;
      }

      for(int i=0;i<b.size();i++){
            m[b[i]]--;
      }
      for(auto i:m){
            if(i.second!=0) return false;
      }
      return true;
}

main(){
      string a,b;
      cout<<"Enter string a : ";
      cin>>a;
      cout<<"Enter string b : ";
      cin>>b;

      if(anagram1(a,b)) cout<<"\nYes"<<endl<<endl;
      else cout<<"\nNo"<<endl<<endl;
}