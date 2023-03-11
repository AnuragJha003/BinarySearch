class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int lo = 0, hi = arr.size();//index bounds to the array 
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;//mid index 
        if (arr[mid] - mid > k) hi = mid;//if a[mid]-mid>k array ka mid and actual mid difference more than k so move leftwards the right pointer 
        else lo = mid + 1;//else left pointer moved ahead 
    }
    return lo + k;//return low /left pointer + the kth index in here 
    }
};

https://leetcode.com/problems/kth-missing-positive-number/
