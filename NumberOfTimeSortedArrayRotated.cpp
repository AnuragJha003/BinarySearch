//NO OF TIMES A SORTED ARRAY IS ROTATED IS NOTHING BUT THE INDEX OF THE MIN ELEMNT IN THE ROTATED SORTED ARRAY GIVEN TO US 


PSEUDO CODE::
int main(){
vector<int> arr;//GIVEN ROTATETD ARRAY 
int s=0;int e=arr.size()-1;
while(s<=e){
int mid=s+(e-s)/2;
int next=mid+1 % N;
int prev=mid+N-1 % N;//ROTATION THATS WHY 
if(arr[mid]<=arr[next] && arr[mid]<=arr[prev]){
return mid;
}
else if(arr[start]<=arr[mid]){
start=mid+1;
}//1ST HALF SORTED SO MOVE RIGHT 
else if( arr[mid]<=arr[end]){
end=mid-1;
}//ELSE MOVE LEFT 
//ALWAYS GO TOWARDS THE UNSORTED PART 
}
return -1;
}

https://www.geeksforgeeks.org/find-rotation-count-rotated-sorted-array/
