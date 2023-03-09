int peak_ele(vector<int> &A){
    int start=0;
    int end=A.size()-1;
    if(start>end) return -1;
    while(start<=end){
        int mid=start + (end-start)/2;
        
        if(mid>0 && mid<A.size()-1){
            
            if(A[mid]>A[mid+1] && A[mid]>A[mid-1]){
                return mid;
            }
            else if(A[mid+1]>A[mid]){
                start=mid+1;
            }
            else if(A[mid-1]>A[mid]){
                end=mid-1;
            }
            
        }
        else if(mid==0){
        return a[0]>a[1]?a[0]:a[1];
        }
        else{
        return a[A.size()-1]>a[A.size()-2]?a[A.size()-1]:a[A.size()-2];
        }
    }
     return -1;
}
int BS(vector<int> &A,int B,int start,int end){//BS ON ASCENDING SORTED ARRAY 
  
    if(start>end) return -1;
    while(start<=end){
        int mid=start + (end-start)/2;
        
        if(A[mid]==B){
            return mid;
        }
        else if(A[mid]>B){
            end=mid-1;
        }
        else if(A[mid]<B){
            start=mid+1;
        }
    }
     return -1;
}
int BS_Decreasing(vector<int> &A,int B,int start,int end){//BS ON DESCENDING SORTED ARRATY 
  
    if(start>end) return -1;
    while(start<=end){
        int mid=start + (end-start)/2;
        
        if(A[mid]==B){
            return mid;
        }
        else if(A[mid]<B){
            end=mid-1;
        }
        else if(A[mid]>B){
            start=mid+1;
        }
    }
     return -1;
}
int Solution::solve(vector<int> &A, int B) {
    int peak=peak_ele(A);//PEAK OR MAX ELMNT IN THE SEQUENCE FOUND OUT IN THE BITONIC ARRAY 
    int r1=BS(A,B,0,peak-1);//LEFT HAND PART IS ASCENDING SORTED SO BINARY SEARCH NORMAL
    int r2=BS_Decreasing(A,B,peak,A.size()-1);//RIGHT HAND IS DESCNEDING SORTED SO BS DESCENDING ON IT 
    return max(r1,r2);//RETURN THE INDEX HAVING THE MAX VALUE 
    //ANY ONE OF THEM WILL RETURN AN INDEX IF THE ELMNT IS PRESENT ELSE -1
    
}

https://www.geeksforgeeks.org/find-element-bitonic-array/
