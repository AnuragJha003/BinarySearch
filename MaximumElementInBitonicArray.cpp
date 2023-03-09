class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int start=0;int end=nums.size()-1;
        if(nums.size()==1) return 0;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid>0 && mid<nums.size()-1){
                if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                    return mid;
                }
                else if(nums[mid]<nums[mid+1]) start=mid+1;
                else end=mid-1;
            }
            else{
            if(mid==0 ){
                if(nums[mid]>nums[mid+1]) return mid;
                else return mid+1;
            }
            else if(mid==nums.size()-1){
                if(nums[mid]>nums[mid-1]) return mid;
                else return mid-1;
            }
            }
        }
        
        return 0;
    }
};
//MAXIMUM ELEMNENT IN BITONIC ARRAY IS NOTHING BUT THE ONLY PEAK ELEMNT PRESET IN THE ARRAY WHICH IS GREATER THAN BOTH OF ITS NEIGHBOURS 
https://www.includehelp.com/icp/maximum-value-in-a-bitonic-array.aspx
