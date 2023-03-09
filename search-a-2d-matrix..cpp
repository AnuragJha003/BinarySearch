M1::
int tar;cin>>tar;
vector<vector<int>>mat;
int n=mat.size();int m=mat[0].size();
int i=0;int j=m-1;
while(i>=0 && i<n && j>=0 && j<n){
if(mat[i][j]==tar){
return {i,j};
}
else if(mat[i][j]>tar){
j--;//THE LOWER COLUMNS ALL WILL HAVE HIGHER VALUES SO THAT COLUMN IS USELESSS J--
}
else{
i++;
}//THE ROW IS WASTEFULL AS WE NEED A GREATER ELMNT SO WE MOVE DOWN THE COLUMN TO THE NEXT ROW 
}
return -1;
}
M2::
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0) return false;
        int n=matrix.size();//NU OF ROWS
        int m=matrix[0].size();//NO OF COLUMNS
        int lo=0;
        int hi=(n*m)-1;//INDEXES ASSIGNED FOR BINARY SEARCH 
        while(lo<=hi){
            int mid=(lo + (hi-lo)/2);//MIDDLE ELEMENT FINDING IN THS WAY TO AVOID OVERFLOW
            if(matrix[mid/m][mid%m]==target){
                return true;
            }//MID/M IS ROW AND MID%M IS THE COLUMN NUMEBRS
            if(matrix[mid/m][mid%m]<target){
                lo=mid+1;//LESS THAN TARGET SO THE LOW ONE MIVES AHEAD 
            }
            else{
                hi=mid-1;//MORE THAN TARGET SO THE HIGHER ONE MOVES BACK BY ONE INDEX TO THE MIDDLE
            }
        }
        return false;
    }
};
https://leetcode.com/problems/search-a-2d-matrix/
