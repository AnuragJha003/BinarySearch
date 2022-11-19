class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mx=-1;
        int s=0;int e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                mx=mid;
                break;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        if(mx!=-1){
            return mx;
        }
        else{
            return s;
        }
        
    }
};

https://leetcode.com/problems/search-insert-position/#:~:text=Search%20Insert%20Position%20%2D%20LeetCode&text=Given%20a%20sorted%20array%20of,(log%20n)%20runtime%20complexity.
