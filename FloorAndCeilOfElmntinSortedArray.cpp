int main(){
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
https://www.geeksforgeeks.org/floor-in-a-sorted-array/

int main(){
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

https://www.geeksforgeeks.org/ceiling-in-a-sorted-array/

