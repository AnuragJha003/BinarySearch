class Solution {
public:
	int minEatingSpeed(vector<int>& piles, int h) {
		int i=1, j=*max_element(piles.begin(), piles.end()), ans;//TRINGI ALL POSSIBLE RATES FROM 1  TO THE MAX ELMNT SEARCH 
		while(i<=j){
			int mid=i+(j-i)/2;//rate considered for the current
			long long int cnt=0;//HPURS TAKEN 
			for(int i=0; i<piles.size(); i++){
				if(piles[i]<mid){cnt++;}//ONE HR TOH LEGA HI 
				else{cnt+=((piles[i]/mid)+(piles[i]%mid!=0));}//ONE HR +1 OR THE REMAINDER LEFT H NA GG 
			}//COUNTIING NUMBER OF HOURS IT TAKES WIHT THE PARTICULAR RATE
            //O(N) M CHECKER FNC 
			if(cnt>h){
				i=mid+1;//HRS TAKEN IS MORE SO WE NEED TO UP THE RATE TO DECREASE TIME TKAEN 
			}//RATE NEEDS TO BE INCREASED NA SO OUR SEARCH SPACE WILL BE THE ONE AHEAD IN THE ARRAY 
			else{
				j=mid-1;
			}//ELSE CHECK FOR SMALLER VALUES IF RANGE M H AS WE NEED MINIMUM RATE OF EATING 
		}
		return i;//RETURN I WHICH WILL POIN YO THE MIN INTEGER K GG 
	}
};

//WE HV TO DO THE BS ON THE RATE OF EATING BANANAS WHICH CAN BE LEAST EATING ONE/HR JISSE MAX AAYEGA DAYS(SUM)


https://leetcode.com/problems/koko-eating-bananas/
