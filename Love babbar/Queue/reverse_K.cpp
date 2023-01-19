/* 
Reverse First K elements of Queue
 */

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    
        int n, k;
        cout<<"ENter size of queue and k : ";
        cin >> n >> k;
        queue<int> q;
        cout<<"Enter elements of queue: ";
        
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    
}
// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    deque<int> dq;
    int l=q.size();
    
    for(int i=0;i<k;i++){
        int x=q.front();
        q.pop();
        dq.push_front(x);
    }
    for(int i=k;i<l;i++){
        int x=q.front();
        q.pop();
        dq.push_back(x);
    }
    for(int i=0;i<l;i++){
        int x=dq.front();
        dq.pop_front();
        q.push(x);
    }
    return q;
}