class Solution {
public:
double findMedianSortedArrays(vector<int>& n1, vector<int>& n2) {
double k;
for(int i=0;i<n2.size();i++)
n1.push_back(n2[i]);
sort(n1.begin(),n1.end());
double k1=n1[n1.size()/2];
double k2=n1[(n1.size()-1)/2]; // if we take k2 = n1[(n1.size()/2)-1]; then it will give runtime error why because if n1.size() is 0 then it woulld give a negative index for the array
    //in this formula -1/2 is 0 so no such problem
if(n1.size()%2!=0)
k=k1;//odd lenght so only one median 
else
k=k1+(k2-k1)/2;//else avg of both the middle elmnts 
return k;//return k 
}
};

https://leetcode.com/problems/median-of-two-sorted-arrays/
