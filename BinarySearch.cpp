class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0;int e=nums.size()-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;
        
    }
};


https://leetcode.com/problems/binary-search/


//ON A REVERSE SORTED ARRAY 
while(s<=e){
    int mid=s+(e-s)/2;
    if(mid==target)return mid;
    else if (target<mid){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
}
return -1;


//IF ORDER NOT KNOWN ::THEN ARR[0]<ARR[1];;;ASCENDING BS ELSE DESCENDING BS

