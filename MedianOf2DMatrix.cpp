//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here          
     /*   priority_queue <int> pq;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                pq.push(matrix[i][j]);
            }
        }
        int m=R*C;
        vector<int> v(m);
        while(pq.size()>0){
            int d=pq.top();
            v.push_back(d);
            pq.pop();
        }
        reverse(v.begin(),v.end());
        int z=v.size();
        return z; */
        vector<int> ans;

        for(int i=0;i<R;i++){

            for(int j=0;j<C;j++){

                ans.push_back(matrix[i][j]);

            }

        }

        sort(ans.begin(),ans.end());

        

        return ans[ans.size()/2];
    }
};



//BINARY SEARCH APPROACH::::
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
int countsmaller(vector<int>& row,int ele){
    int l=0;int h=row.size()-1;
    while(l<=h){
        int md=(l+h)>>1;
        if(row[md]<=ele){
            l=md+1;
        }
        else{
            h=md-1;
        }
    }
    return l;
}//SMALLEST ELMNT GREATER THAN ELE IN HERE 
    int median(vector<vector<int>> &matrix, int R, int C){
        int lo=1;int hi=1e9;
        int n=matrix.size();int m=matrix[0].size();
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            int cnt=0;
            for(int i=0;i<n;i++){
                cnt+=countsmaller(matrix[i],mid);
            }
            if(cnt<=(n*m)/2)lo=mid+1;
            else hi=mid-1;
        }
        return lo;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends
