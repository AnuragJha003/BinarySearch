//MUCH LIKE BOOK ALLOCATION PROBLEM 
//NO OF STUDENTS IN THAT PROBLEM IS EQUAL TO K NON EMPTY SUBARRAY SPLIT 
//MAX ALLOCATION FOR A PARTICULAR STUDENT THERE IS EQUIVALENT TO THE LARGEST SUM OF THE K SUBARRAYS 
//WE NEED TO MINIMIZE THIS LARGEST SUM ONLY/////SAME QUESTION AS THAT OF THE BOOK ALLOCATION 


class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int sum=0;
        for(auto x:nums){
            sum=sum+x;
        }
        int ans=-1;
        int high=sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            int c=0;//sum of the given subarray 
            int split=1;//STORING LENGHT OF THE SUBARRAY
            for(int i=0;i<nums.size();i++){
                if(c+nums[i]>mid){
                    c=0;
                    split++;
                }
                c=c+nums[i];
            }
            if(split>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};


/*



class Solution {
public:
    int splitArray(vector<int>& arr, int k) {
        
        int l = *max_element(arr.begin(),arr.end());
        int r = accumulate(arr.begin(),arr.end(),0);
        
        while(l < r){
            int m = (l + r) >> 1;
            int split = 1;
            int current = 0;
            
            for(int i = 0; i<arr.size() ; i++){
                
                if(current + arr[i] > m){
                    current = 0;
                    split++;
                }
                current += arr[i];
            }
            
            if(split > k) l = m + 1;
            else r = m;
        }
        
        return l ;
    }
};


*/
https://leetcode.com/problems/split-array-largest-sum/
