//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
/* 
Back to Explore Page

Subarray with given sum

Minimum number of jumps

Check for BST

Kadane's Algorithm

Missing number in array

Left View of Binary Tree

Minimize the Heights II

Remove loop in Linked List

Find duplicates in an array

Kth smallest element

Detect Loop in linked list

Sort an array of 0s, 1s and 2s

Majority Element

Nth node from end of linked list

Detect cycle in a directed graph

Finding middle element in a linked list

Peak element

Reverse a linked list

Check if Linked List is Palindrome

Detect cycle in an undirected graph

Count Inversions

Binary Search

BFS of graph

Boundary Traversal of binary tree

Equilibrium Point

Count pairs with given sum

Diameter of a Binary Tree

Get minimum element from stack

Parenthesis Checker

Intersection Point in Y Shapped Linked Lists

Leaders in an array

Trapping Rain Water

Maximum Product Subarray

Check for Balanced Tree

Find triplets with zero sum

Union of two arrays

Height of Binary Tree

Remove duplicate element from sorted Linked List

Rotate Array

Rotate a Linked List
Circular tour
MediumAccuracy: 33.91%Submissions: 100k+Points: 4
Lamp
This problem is part of GFG SDE Sheet. Click here to view more.  

Suppose there is a circle. There are N petrol pumps on that circle. You will be given two sets of data.
1. The amount of petrol that every petrol pump has.
2. Distance from that petrol pump to the next petrol pump.
Find a starting point where the truck can start to get through the complete circle without exhausting its petrol in between.
Note :  Assume for 1 litre petrol, the truck can go 1 unit of distance.

Example 1:

Input:
N = 4
Petrol = 4 6 7 4
Distance = 6 5 3 5
Output: 1
Explanation: There are 4 petrol pumps with
amount of petrol and distance to next
petrol pump value pairs as {4, 6}, {6, 5},
{7, 3} and {4, 5}. The first point from
where truck can make a circular tour is
2nd petrol pump. Output in this case is 1
(index of 2nd petrol pump)
 */
struct petrolPump
{
    int petrol;
    int distance;
};


// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       int balance =0,deficit =0,start=0;
       
    //   two pointers approach
    
       for(int i=0;i<n;i++){
           balance+=p[i].petrol-p[i].distance;
           if(balance<0){
               start=i+1;
               deficit+=balance;
               balance=0;
           }
       }
       return (balance+deficit>=0)? start:-1;
       
    }
};



//{ Driver Code Starts.

int main()
{
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
}

// } Driver Code Ends