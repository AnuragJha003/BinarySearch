//SINGLE ELMNT IN SORTED ARRAY(BS) 
//O(LOGN)
int singleNonDuplicate(vector<int>& nums) {
        
        int n=nums.size();
        int i=0,j=n-1;
        
        while(i<j){
            int mid=(i+j)>>1;
            
            int temp;
            if(mid%2==0){
                temp=mid+1;
                
            }
            else{
                temp=mid-1;
            }  
            if(nums[temp]!=nums[mid]){
                j=min(mid,temp);
                
            }
            else{  
                i=max(mid,temp)+1;
                
                
            }
        }
        return nums[i];
    }
 2ND APPROACH:
 O(N)
 class Solution {
public:
     int singleNonDuplicate(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            res=res^nums[i];
        }
        return res;
        }
        };
        
        https://leetcode.com/problems/single-element-in-a-sorted-array/
