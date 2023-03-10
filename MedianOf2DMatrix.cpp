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
