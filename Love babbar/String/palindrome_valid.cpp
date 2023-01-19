/* A phrase is a palindrome if, after converting all uppercase letters into lowercase 
letters and removing all non-alphanumeric characters, it reads the same forward and backward.
Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
*/

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    
        string a;

        //copying alphanumeric characters from string s to string a
        for(int i=0;s[i]!='\0';i++){
        //copying capital letters by coverting into small letters
            if(s[i]>=65&&s[i]<=90){
                a.push_back(s[i]+32);
            }
        // copying small characters
            if(s[i]>=97&&s[i]<123){
                a.push_back(s[i]);
            }
        // copying numbers
            if(s[i]>=48&&s[i]<58){
                a.push_back(s[i]);
            }
        }
        cout<<"string a : "<<a<<endl;

        string b;
      //   copying string a into b
        for(int i=0;a[i]!='\0';i++){
            b.push_back(a[i]);
        }
        cout<<"string b : "<<b<<endl;

      //reversing the string b
        int st=0;
        int e=b.size()-1;
        while(st<e){
            swap(b[st],b[e]);
            st++;
            e--;
        }
        cout<<"string b after reverse : "<<b<<endl;

        if(a==b) return true;
        
        return false;
    }

    
    main(){
          int n;
          string s;
          cout<<"Enter String : ";
          getline(cin,s);

          cout<<"\nBefore reversing : ";
          cout<<s<<endl;;
          
          isPalindrome(s);
          if(isPalindrome(s)) cout<<"\nTRUE";
          else cout<<"\nFALSE";
          cout<<endl<<endl;

    }