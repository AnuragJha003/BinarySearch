int floor(){
vector<int> arr;
int ele;cin>>ele;
int l=0;r=arr.size()-1;
whie(l<=r){
int mid=l+(r-l)/2;
if(ele==arr[mid]){
return arr[mid];
}
else if(ele>arr[mid]){
res=arr[mid];
l=mid+1;
//ONE POSSIBLE ANSWER AND LEFT POINTER MOVED AHEAD AS MAXIMUM CHAHIYE 
}
else{
r=mid-1;
}
}
return -1;
}
int ceil(){
vector<int> arr;
int ele;cin>>ele;
int l=0;r=arr.size()-1;
whie(l<=r){
int mid=l+(r-l)/2;
if(ele==arr[mid]){
return arr[mid];
}
else if(ele<arr[mid]){
res=arr[mid];
r=mid-1;
//ONE POSSIBLE ANSWER AND RIGHT POINTER MOVED BACK AS MINIMUM CHAHIYE 
}
else{
l=mid+1;
}
}
return -1;
}
int f(vector<int> arr,int k){
int floor=(arr,k);int ceil=ceil(arr,k);
int mn=min(abs(k-floor),abs(k-ceil));
return mn;
}
//MINIMUMUM ABSOLUTE DIFFERENCE OF A GIVEN KEY IN A SORTED ARRAY 
APPROACH2:CAN DO SIMPLE BS AND LOW AND HIGH AUTOMATIC POINT TO FLOOR AND CEIL OF THE ELEMNT AND TAKE THE MIN ABSOLUTE DIFFERENCE 

https://www.callicoder.com/minimum-difference-element-in-sorted-array/
