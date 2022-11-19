class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;//ANSWER VECTOR TO BE RETURNED 
        int fi=first(nums,target);//FOR FIRST OCCURANCE 
        int li=last(nums,target);//FOR LAST OCCURANCE 
        ans.push_back(fi);
        ans.push_back(li);//PUSHING BACK BOTH OF THEM IN ANSWR VECTOR 
        return ans;
    }
        
        int first(vector<int>& nums, int target){
        int l=0;int r=nums.size()-1;//2 POINTERS 
        int res=-1;//DEFAULT
        while(l<=r){
            int mid=(l+r)/2;
            if(target==nums[mid]){
                res=mid;//INDEX RETURNED
                r=mid-1;//FIRST OCC TARGET MIL GYA WE WANT FIRST OCCURANCE SO WE GO BEHIND FURTHER TO CHECK H KI NHI
            }
            else if(target<nums[mid]){
                r=mid-1;
            }
            else{
                l=mid+1;//FOR LAST OCC AS IT IS SORTED
            }
        }
        return res;
    }
          int last(vector<int>& nums, int target){
        int l=0;int r=nums.size()-1;
        int res=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(target==nums[mid]){
                res=mid;//INDEX RETURNED
                l=mid+1;//LAST OCC AND WE WANT TO SEARCH THAT ELMNT IS COMING AHEAD IN THE SECOND HALF OF ARRAY AHEAD OR NOT 
            }
            else if(target<nums[mid]){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
        
};

https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
