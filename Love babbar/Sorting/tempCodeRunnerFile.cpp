/* 
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst case time complexity is quite high.
 */

#include<bits/stdc++.h>
using namespace std;

vector<int> bubble(vector<int> &arr){
      bool swapped = false;  //for optimizing bubble sort (ye imp h)
      
      for(int i=0;i<arr.size()-1;i++){
            for(int j=0;j<arr.size()-i-1;j++){
                 if(arr[j]>arr[j+1]){
                       swap(arr[j],arr[j+1]);
                       swapped=true;
                 }
                 if(swapped = false) break;
            }
      }
      return arr;
}

// recursive 
vector<int> bubble(vector<int> &arr){
      
      for(int i=0;i<arr.size()-1;i++){
            for(int j=0;j<arr.size()-i-1;j++){
                 if(arr[j]>arr[j+1]){
                       swap(arr[j],arr[j+1]);
                       swapped=true;
                 }
            }
      }
      return arr;
}

main(){
      vector<int> arr;
      int n,k;
      cout<<"Enter number of elements: ";
      cin>>n;

      cout<<"Enter elements : ";
      for(int i=0;i<n;i++){
            cin>>k;
            arr.push_back(k);
      }
      cout<<"Array before sorting:\n";
      for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
      }
      cout<<"\nArray after sorting:\n";
      bubble(arr);
      for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
      }

}