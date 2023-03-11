class Solution {
public:
    bool canplace(int k,int n,vector<int>&stalls,int reqmindist){
        int coord=stalls[0];int cnt=1;//PLACING THE FIRST COW AT THE VERY FIRST INDEX AND COUNT AS 1
        for(int i=1;i<n;i++){
            if((stalls[i]-coord) >=reqmindist){//IF DISTANCE IS MORE THEN OR EQUAL TO THE MIN DISTANCE MATLAB ITNA HONA HI CHAHIYE
                cnt++;//INCREMENT AS COW CAN BE ALLOCATED TO THE STALL 
                coord=stalls[i];//NEW COORDINATE WITH WHICH DISTANCE OF NEXT COW HAS TO BE CHEKCED
            }
            if(cnt==k){//IF K COWS PLACED WITH THIS MIN DISTNCE THEN RETURN TRUE 
                return true;
            }
        }
        return false;//ELSE RETURN FALSE
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());//SORT THE STALLS AS IT CNA BE GIVEN IN ANY ORDER
        int lo=1;int hi=stalls[n-1]-stalls[0];
        //LOWER RANGE OF MAXIMUM MIN DISTANCE BETWEEN COWS PLACED CAN BE 1
        //AND HIGHER RANGE OF MAX MIN DISTANCE CAN BE DIFFERENCE BETWEEN MAX AND MIN ELMNT OF THE ARRAY 
        //WHILE OBSERVING THE TREND WE SEE 1 2 3 4 ....MONOTNICALLY INCREASING FNC AND IF ONE CONDITION FAILS THEN ALL FOR THE RIGHT FAILS TOO
        //BS ON ANSWER SPACE 
        int res=-1;//MAXIMISE FOR MIN DISTANCE BETWEEN 2 OF THEM 
        while(lo<=hi){
            int mid=(lo+hi)>>1;//MID WHICH MIGHT BE ONE POSSIBLE MAX OF THE MIN DISTANCE
            if(canplace(k,n,stalls,mid)){//CAN PLACE MEANS POSSIBLE CHECKER FNC 
                res=mid;//STORE IN IT 
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return res;
    }
};
//MINIMIZE THE MAXIMUM OR MAXIMISE THE MINIMUM 
https://practice.geeksforgeeks.org/problems/aggressive-cows/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=aggressive-cows
