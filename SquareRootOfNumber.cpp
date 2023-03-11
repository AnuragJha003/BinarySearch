class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long int start = 0;

        long long int end = x;

        if(x==1) return 1;

        while(start+1<end){

            long long mid = start+(end-start)/2;

            if(mid*mid==x) return mid;

            else if(mid*mid>x) end = mid;

            else start = mid;

        }

        return start;
    }
};

https://practice.geeksforgeeks.org/problems/square-root/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=square-root
