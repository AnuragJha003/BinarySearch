//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    /*unordered_map<int,int>mp;
	    for(int i=0;i<n;i++){
	        mp[arr[i]]++;
	    }
	    return mp[x];*/
	    int left=0,right=n-1,first=-1;

    while(left<=right){

        int mid= right+(left-right)/2;

        if(arr[mid]==x){

            first=mid;

            right=mid-1;

        }

        else if(arr[mid]<x) left=mid+1;

        else right=mid-1;

    }

    int last=-1;

    left=0;

    right=n-1;

    while(left<=right){

        int mid=right+(left-right)/2;

        if(arr[mid]==x){

            last=mid;

            left=mid+1;

        }

        else if(arr[mid]<x) left=mid+1;

        else right=mid-1;

    }

    if(first==-1 && last ==-1)return 0;

    else return {last-first+1};
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends

https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-occurrence
