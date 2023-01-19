#include<bits/stdc++.h>
using namespace std;

main(){
      string str="Zubair Ahmad";
      string s="@40";

// substring
// substr fun->  substr(st index, length)
      string sub=str.substr(2, 4);
      cout<<sub<<endl;   //bair

 // insert and erase
      for(int i=0;str[i];i++){
        if(str[i]==' '){
            str.insert(i,"@40");
            str.erase(i+3,1); //first parameter is index and second is  length to which u want to erase
        }
    }
       cout<<str<<endl;

 //  find 
      int idx= str.find("Ahm"); //this will return index of A in str if not found return -1
      cout<<"idx = "<<idx<<endl;

// append 


}