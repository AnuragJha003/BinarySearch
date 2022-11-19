class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        /*int mx=0;
        if(nums.size()==1){
            return 0;
        }
        if(nums.size()==2){
            if(nums[0]>nums[1]){
                return 0;
            }
            else{
                return 1;
            }
        }
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                mx=i;break;
            }
        }
        if(mx!=0) return mx;
        else{
            int d=*max_element(nums.begin(),nums.end());
            auto it=find(nums.begin(),nums.end(),d);
            int e=it-nums.begin();
            return e;
        }*/
      /*  int l=0;int h=nums.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(mid>0 && mid<nums.size()-1){
                if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                    return mid;
                }
                else if(nums[mid-1]>nums[mid]){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else if(mid==0){
                if(nums[0]>nums[1]){
                    return 0;
                }
                else{
                    return 1;
                }
            }
            else if(mid==nums.size()-1){
                if(nums[nums.size()-1]>nums[nums.size()-2]){
                    return nums.size()-1;
                }
                else{
                    return nums.size()-2;
                }
            }
        }
        return 0;
    }
};
*/ 


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
      
      https://leetcode.com/problems/find-peak-element/#:~:text=Find%20Peak%20Element%20%2D%20LeetCode&text=A%20peak%20element%20is%20an,to%20any%20of%20the%20peaks.
