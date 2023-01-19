#include<bits/stdc++.h>
using namespace std;

/* The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.

    The subarray which is already sorted. 
    Remaining subarray which is unsorted.

In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.
 */
// iterative
vector<int> selecsort(vector<int> &arr){
      
      for(int i=0;i<arr.size()-1;i++){
            int minidx=i;
            for(int j=i;j<arr.size();j++){
                 if(arr[j]<arr[minidx]){
                       minidx=j;
                 }
            }
            if(arr[i]>arr[minidx]){
                  int temp=arr[i];
                  arr[i]=arr[minidx];
                  arr[minidx]=temp;
            }
      }
      return arr;
}
// TC : O(N2)
// SC : O(1)

// recursive

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
      selecsort(arr);
      for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
      }

}