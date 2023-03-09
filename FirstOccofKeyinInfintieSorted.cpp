int f1(int k,vector<int>arr){
int l=0,r=1;
while(k>arr[r]){
l=r;r=r*2;
}
//L AND R OBTAINED INFINTIE SORTED ARRAY
while(l<=r){
int mid=l+(r-l)/2;
if(k==arr[mid]){
res=mid;
r=mid-1;//1ST OCC;
}
else if(k>arr[mid]){
l=mid+1;
}
else{
r=mid-1;
}
}
return res;
}

https://www.geeksforgeeks.org/find-index-first-1-infinite-sorted-array-0s-1s/
