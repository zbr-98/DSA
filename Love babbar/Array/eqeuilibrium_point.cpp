/* 
Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array. 
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Note: Retun the index of Equilibrium point. (1-based index)

Example 1:

Input: 
n = 5 
A[] = {1,3,5,2,2} 
Output: 3 
Explanation: For second test case 
equilibrium point is at position 3 
as elements before it (1+3) = 
elements after it (2+2). 

 
  */

 //{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        long long sum=0, leftsum=0;
        if(n==1) return 1;
        
        for(int i=0; i<n; i++){
            sum+=a[i];
        }
        
        for(int i=0; i<n; i++){
            sum-=a[i];
            
            if(leftsum==sum) return i+1;
            
            leftsum+=a[i];
            
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

        long long n;
        
        //taking input n
        cout<<"Enter number of terms: ";
        cin >> n;
        long long a[n];

        //adding elements to the array
        cout<<"enter elements into an array: ";
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }]
    return 0;
}

// } Driver Code Ends