#include <iostream>
#include <climits>
using namespace std;

// Kadane's algo
// (Largest Sum contiguos subarray.)
// I/P : [-2 -3 4 -1 -2 1 5 -3]
// O/P : [4 -1 -2 1 5]

int main()
{

      int *arr = new int;
      int n;

      cout << "\nEnter n: ";
      cin >> n;

      cout << "Enter elements: ";
      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      cout << "\nElements are: ";
      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }
      cout << endl;

      // brute force technique  O(N²)

      // int maxi=INT_MIN;

      // for(int i=0;i<n;i++){
      //       int sum=0;
      //       for(int j=i;j<n;j++){
      //             sum+=arr[j];
      //             if(sum>maxi) maxi=sum;
      //       }
      // }
      // cout<<"\nMaximum sum is: "<<maxi<<endl<<endl;

      // Kadane's algo O(N)

      // int maxi=INT_MIN;
      // int sum=0;
      // for(int i=0;i<n;i++){
      //       sum+=arr[i];
      //       maxi=max(maxi,sum);
      //       if(sum<=0) sum=0;
      // }
      // cout<<maxi;

      int maxi = INT_MIN;
      int sum = 0;
      int start = 0;
      int end = 0;

      for (int i = 0; i < n; i++)
      {
            sum += arr[i];
            if (sum > maxi)
            {
                  maxi = sum;
                  end = i;
            }
            if (sum <= 0)
            {
                  sum = 0;
                  start = i + 1;
            }
      }

      cout << "\nMaximum sum subarray is: ";
      for (int i = start; i <= end; i++)
      {
            cout << arr[i] << " ";
      }
      cout << "\nMaximum sum subarray is: " << maxi << endl;

      return 0;
}