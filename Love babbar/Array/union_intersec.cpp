#include<bits/stdc++.h>
#include<set>
using namespace std;

void unionFunc(int arr1[], int arr2[], int m, int n){
      set <int> s;
      for(int i=0; i<m; i++) s.insert(arr1[i]);

      for(int i=0; i<n; i++) s.insert(arr2[i]);
      
      for(auto it : s) cout<< it <<" ";
      
      cout<<endl;
}


void interFunc(int arr1[], int arr2[], int m, int n){
      set <int> se;
      sort(arr1,arr1+m);
      sort(arr2,arr2+n);

      for(int i=0; i<n; i++) se.insert(arr1[i]);
      
      int count=0;
      for(int i=0; i<m; i++){
            auto it = se.find(arr2[i]);
            if(it!=se.end()){
                  cout<< *it<<" ";
                  se.erase(arr2[i]);
            }
      }
}

int main(){
    int* arr1 =new int;
    int* arr2 = new int;
    int m, n;

    cout<<"Enter the size of array1 : ";
    cin>>m;

    cout<<"Enter elements:";
    for(int i=0; i<m; i++) cin>>arr1[i];
    
    cout<<"Enter the size of array2 : ";
    cin>>n;

    cout<<"Enter elements:";
    for(int i=0; i<n; i++) cin>>arr2[i];
    
   unionFunc(arr1, arr2, m, n);

    // interFunc(arr1, arr2, m, n);
   interFunc(arr1, arr2, m, n);

   return 0;
}