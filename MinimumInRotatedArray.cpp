class Solution {
public:
    int findMin(vector<int>& nums) {
       // int d=*min_element(nums.begin(),nums.end());
        //return d;
        //OBSERVATION IS THAT THE ELEMNT ABT WHICH INDEX ROTATION IS DONE WAHIN ELMNT MINIMUM HOGA GG
        /*int s=0;int e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            int prev=(mid+nums.size()-1)%nums.size();
            int next=(mid+1)%nums.size();
            if(nums[mid]<nums[prev] && nums[mid]<nums[next]){
                return nums[mid];
            }
            if(nums[s]<=nums[mid]){
                s=mid+1;//LEFT PART KA SORTED ARRAY 
            }
            if(nums[mid]<=nums[e]){
                e=mid-1;
            }
            
        }*/
        //return -1;
        if(nums.size()==1) return nums[0];
        if(nums[0]<nums.back()) return nums[0];//ALREADY SORTED TOH 
        int n=nums.size();
        int ans=INT_MAX;
        int s=0;int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]>=nums[0]){
                //FIRST HALF M H 
                s=mid+1;//RIGHT SIDE JAA RHE
            }//ROTATED SO SMALLER ELMNTS IN THE RIGHT HALF OF THE ARRAY ELMNTS 
            else{
                ans=min(ans,nums[mid]);//2ND HALF M H OF SMALLER EL FINDING MIN ELMNT IN THE SECOND HALF OF ARRAY 
                e=mid-1;//END     IS      MID-1
            }
            
        }
        return ans;
    }
};

https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
