/*Explanation
Binary search the result.
If the sum > threshold, the divisor is too small.
If the sum <= threshold, the divisor is big enough.

Complexity
Time O(NlogM), where M = max(A)
Space O(1)
*/


class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) 
    {
        int lo=1,hi=1000000000,k=0;
        
        while(lo<hi)
        {
            k=(lo+hi)/2;
            int sum=0;
            for(int i=0;i<nums.size();i++)
                sum+=ceil(1.0*nums[i]/k);//SUM CALCULATED OF THAT ARR WHEN K IS CONSIDERED DIVISOR 
            if(sum>threshold)//IF SUM>THRESHOLD
                lo=k+1;//THEN LO=K+1 AS WE NEED THE SMAALEST DIVISOR WHOSE SUM IS LESS SO WE MOVE AHEAD TO CHECK SUCH 
            else
                hi=k;//ELSE HIGH MOVED K (HIGH==K)
        }
        return lo;//RETURN THE LO POINTER POINTING TO SMALLEST SUCH DIVISOR 
    }
};

https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
