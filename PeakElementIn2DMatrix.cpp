class Solution {
public:
    int findMax(vector<vector<int>>mat, int r){
        int maxi=INT_MIN;
        int res_idx=-1;
        for(int i=0;i<mat[0].size();i++){
            if(mat[r][i]>maxi){
                maxi=mat[r][i];
                res_idx=i;
            }
        }
        return res_idx;
    }//RETUNRS THE INDEX OF THE COLUMN WITH THE MAX ELMNT FOR THE GIVEN ROW :)
    //MATLAB INDEX OF MAX ELMENT OF THE ROW THAT IS ROW KA MAX WALA INDEX AND THIS IS CALLED FOR EACN AND EVERY ROW WE GO THORUGH 
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        // for corner rows we need to check only bottom & top element & for middle row check for bottom & top element both
        int low=0;
        int high=mat.size()-1;
        // binary search in rows 
        while(low<=high){//O(LOGN)
            int mid=low+(high-low)/2;
            int col_idx=findMax(mat,mid);//     //finding maximum element in that perticular row O(M) WALA FUNCTION THIS 
            if(mid==0){//FIRST ROW NO UP OR LEFT NEIGHBOUR ...RIGHT WALA NEIGHBOUR TOH ALREADY CHECKED AS IN SAME ROW 
                //ONLY TO CHECK THE NEXT ROW ELMNT IN THE SAME COLUMN
                if(mat[mid+1][col_idx]<mat[mid][col_idx])
                    return {mid,col_idx};
            }
            else if(mid==mat.size()-1){
                //NO LEFT OR NO DOWN NEIGHBOUR RIGHT WALA CHECKED SAME ROW ONLY TOP CHECK KRNA H 
                if(mat[mid-1][col_idx]<mat[mid][col_idx])
                    return {mid,col_idx};
            }
            else{
                //LEFT AND RIGHT NEIGHBOUR ALREADY CHECKED
                if((mat[mid+1][col_idx]<mat[mid][col_idx]) && (mat[mid-1][col_idx]<mat[mid][col_idx])){
                    return {mid,col_idx};
                }
            }

            //binary search for row if mat[mid][col_idx]<mat[mid+1][col_idx] move down else up

            if(mat[mid][col_idx]<mat[mid+1][col_idx]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return {-1,-1};
        
    }
};

https://leetcode.com/problems/find-a-peak-element-ii/
