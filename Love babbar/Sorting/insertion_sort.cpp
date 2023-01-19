/* 
Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.
Characteristics of Insertion Sort:

    This algorithm is one of the simplest algorithm with simple implementation

    Basically, Insertion sort is efficient for small data values

    Insertion sort is adaptive in nature, i.e. it is appropriate for data sets which are already partially sorted.
 */

#include<bits/stdc++.h>
using namespace std;

vector<int> insertion(vector<int> &arr){
      
      for(int i=1;i<arr.size();i++){

            int key=arr[i];
            int j=i-1;

            while(j>=0&&arr[j]>key){
                  arr[j+1]=arr[j];
                  j--;
            }
            arr[j+1]=key;
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
      insertion(arr);
      for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
      }

}