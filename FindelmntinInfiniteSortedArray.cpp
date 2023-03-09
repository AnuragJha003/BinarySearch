int main(){
vector<int> arr;
//INFINITE SIZED ARRAY WHICH IS SORTED 
int start=0,end=1;
int k;cin>>k;
//END POINTER IN DOUNT WHERE TO BE PLACED SO 
while(k>arr[end]){
start=end;
end=end*2;
}
//START AND END POINTERS FIXED NOW AND THE TARGET ELMNT K IS NOW IN BETWEEN THE START AND END POINTERS 
BS(arr,start,end);//NORMAL BINARY SEARCH TO GET THE INDEX 

https://www.geeksforgeeks.org/find-position-element-sorted-array-infinite-numbers/
