class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;//LEFT POINTER
        int r=n-1;//RIGHT POINTER
        while(l<=r){
            int mid=(l+r)/2;//MID INDEX
            if(nums[mid]==target){
                return mid;
            }//MID INDEX RETURNED IF PRESENT
            else if(nums[mid]>=nums[l]){
                if(target<=nums[mid] && nums[l]<=target){
                    r=mid-1;//MID SE LESS HAI AND TARGET IMMEDIATE LEFT ELEMENT SE LARGER HAI THEN RIGHT POINTER MODIFIED
                }
                else{
                    l=mid+1;
                }//ELSE LEFT POINTER MODIFIED
            }
            else{
                if(target>=nums[mid] && target<=nums[r]){//MID SE LARGER HAI BUT IMMEDIATE RIGHT ELEMENT SE SMALL HAI SO LEFT POINTER MODIFIED
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }//ELSE RIGHT POINTER MODIFIED
            }
        }
        return -1;
    }
};

https://leetcode.com/problems/search-in-rotated-sorted-array/
