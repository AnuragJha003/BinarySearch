class Solution {
public:
    
    
    bool check(vector<int> &v,int m,int k,int mid){
        int total=0;int c=0;
        for(int i=0;i<v.size();i++){
            if(v[i]<=mid){//IF CONSECUTIVE THEN 
                c++;//C+=
                if(c==k){//IF K EQUAL ELMNTS 
                    total++;//THEN TOTAL++
                    c=0;//AND COUNTO OF CONSECUTIVE ELMNTS RESET TO ZERO 
                }
            }
            else{
                c=0;//RESET TO GET NO OF CONSECIUTIVE BOUQUETS AS CONSECUTIVE ELMNT NHI H
            }
        }
        if(total>=m)return true;//IF TOTAL >=M THEN RETURN TRUE 
        return false;//ELSE FALSE
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
       //m bouquets using k adjacent flowers only after ith flower has bloom in the bloomday[i]
        int ans=-1;
        int s=0;int e=INT_MAX-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(check(bloomDay,m,k,mid)){
                ans=mid;
                e=mid-1;//AND WE WANT MINIMUM DAYS SO WE GO TO THE EVEN SMALLER SIDE TO CHECK WHETER IT IS POSSIBLE OR NOT 
            }
            else{
                s=mid+1;//MOVE TO THE LARGER PART TO CHECK POSSIBLITY 
            }
        }
        return ans;//RETURN ANS GGM
    }
};

https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/
