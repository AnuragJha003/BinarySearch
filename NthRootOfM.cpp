class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	    int l=0;int h=m;int mid=0;
	    while(l<=h){
	        mid=l+(h-l)/2;
	        double t=pow(mid,n);
	        if(t==m){
	            return mid;
	        }
	        else if(t<m){
	            l=mid+1;
	        }
	        else{
	            h=mid-1;
	        }
	   }
	   return -1;
	}  
};
https://practice.geeksforgeeks.org/problems/find-nth-root-of-m5843/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-nth-root-of-m
