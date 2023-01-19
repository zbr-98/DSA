#include<bits/stdc++.h>
using namespace std;

// multiplication and modulo method

void alternateMaxMin(int arr[],int n){
      // initialize index of first minimum and first
    // maximum element
    int max_idx = n - 1, min_idx = 0;
 
    // store maximum element of array
    int max_elem = arr[n - 1] + 1;
 
    // traverse array elements
    for (int i = 0; i < n; i++) {
        // at even index : we have to put maximum element
        if (i % 2 == 0) {
            arr[i] += (arr[max_idx] % max_elem) * max_elem;
            max_idx--;
        }
 
        // at odd index : we have to put minimum element
        else {
            arr[i] += (arr[min_idx] % max_elem) * max_elem;
            min_idx++;
        }
    }
    // array elements back to it's original form
    for (int i = 0; i < n; i++)
        arr[i] = arr[i] / max_elem;
}

// when element in array are in consecuitve manner
void alternateMaxMineasy(int arr[],int n){
      // initialize index of first minimum and first
    // maximum element
    int max_el = arr[n - 1], min_el = arr[0];
 
    
    // traverse array elements
    for (int i = 0; i < n; i++) {
        // at even index : we have to put maximum element
        if (i%2==0) {
            arr[i]=max_el;
            max_el--;
        }
        // at odd index : we have to put minimum element
        else {
            arr[i] =min_el;
            min_el++;
        }
    }
}

main(){
      int A[]={1,2,3,4,5,6,7,8,9,10};
      int n=sizeof(A)/sizeof(A[0]);

//   O/P: A[]={10,1,9,2,8,3,7,4,6,5};
   
      /* alternateMaxMin(A,10);
      for(int i=0;i<n;i++){
            cout<<A[i]<<" ";
      } */
      cout<<endl;

      alternateMaxMineasy(A,10);
      for(int i=0;i<n;i++){
            cout<<A[i]<<" ";
      }
}