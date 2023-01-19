//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int st=0,i;
        long long sum=arr[0];
        vector<int> ans;
        
        for(i=1;i<=n;i++){

            // sliding window approach
            while(sum>s && st<i-1){
                sum=sum-arr[st];
                st++;
            }
            
            if(sum==s){
                st=st+1;
                ans.push_back(st);
                ans.push_back(i);
                return ans;
            }
            
            if(i<n)
                sum+=arr[i];
                
        }
        ans.push_back(-1);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends