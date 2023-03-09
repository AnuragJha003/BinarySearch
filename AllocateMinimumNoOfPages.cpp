bool isposs(int barr){//IF IS POSSIBE WITH BARRIER BARR
allocatedst=1;pages=0;//ALLOCATED STUDENT AND PAGES 
for(int i=0;i<n;i++){
if(arr[i]> barr)return false;//IF INDIVUDAL ELMNT JYADA H THEN ALLOCATION NOT POSSIBLE 
if(pages+arr[i]>barr){//IF ALLOCATION EXCEEDS THE BARRIER 
allocatedst++;//INCREMENT THE ALLOCATED STUDNETS 
pages=arr[i];//PAGES MADE TO ARR[I]
}
else{
pages+=arr[i];//ELSE ALLOCATION POSSIBLE H SO ADD ARR[I] TO IT 
}
}
if(allocatedstu>k)return false;//IF > K STUDENTS ALLOCATE HO RHA H THEN RETURN FALSE 
return true;//ELSE TRUE SATISFY 
}
//O(N) CHECKER FUNCTION 

int low=*min_element(arr.begin(),arr.end());int high=sum(arr);//SEARCH SPACE DEFINED FOR LOW AND HIGH (ON ANSWER IT IS BS ON NOT THE ARRAY BUT THE GIVEN SEARCH SPACE PROVIDED TO U S)
int res=-1;//RES VALUE 
while(low<=high){
int mid=low+(high-low)/2;
if(isposs(mid)){//IF ALLOCATION POSSIBLE IN THE MID
res=mid;//RES M MID STORE KIYE
high=mid-1;//AND MAXIMUM ALLOCATION IS IN RES BUT WE NEED TO MINIMIZE IT SO HIGH MOVED TOWARDS LEFT END 
}
else{
low=mid+1;//ELSE LOW POINTER MOVED AHEAD TO GET A POSSIBLE MAXIMUM ALLOCATION 
}
}
