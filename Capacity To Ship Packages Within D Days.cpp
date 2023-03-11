class Solution {
public:
    int roundTimeTrip(int C, vector<int>&weights) {

       int current_weight = 0,rt = 0; 

       for(int i = 0;i < weights.size();i++){

           if(current_weight + weights[i] <= C){

               current_weight += weights[i];

           }

           else{

               rt++;

               current_weight = weights[i];

           }

       }

       rt++;//FOR THE LAST ELEMNT TO BE LEAVING IN THE CASE 

       return rt;
   }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();

   int low,high,mid,max_elt,sum_weight = 0;

       

   max_elt = INT_MIN;

   for(int i = 0;i < n; i++) {

        max_elt = max(max_elt,weights[i]);

        sum_weight+=weights[i];

    }

       

       // Search Space -> max_elt to sum_weights   

       // FFFTTT

       // First T

       // p(x) : roundTimeTrip(x) <= D

       low = max_elt, high = sum_weight;

       while(low < high) {

           mid = low + (high - low)/2;

           if(roundTimeTrip(mid,weights) <= days)  

               high = mid;

           else
               low = mid + 1;
       }

       return low;

}
};
/*int roundTimeTrip(int C, vector<int>&weights) {

       int current_weight = 0,rt = 0;

       for(int i = 0;i < weights.size();i++){

           if(current_weight + weights[i] <= C){

               current_weight += weights[i];

           }

           else{

               rt++;

               current_weight = weights[i];

           }

       }

       rt++;

       return rt;

   }

 

int leastWeightCapacity(vector<int> &weights, int d)

{

   // Search Space

   // low -> minimum Element in the array

   // high -> sum of all the element in the array

int n = weights.size();

   int low,high,mid,max_elt,sum_weight = 0;

       

   max_elt = INT_MIN;

   for(int i = 0;i < n; i++) {

        max_elt = max(max_elt,weights[i]);

        sum_weight+=weights[i];

    }

       

       // Search Space -> max_elt to sum_weights

       // FFFTTT

       // First T

       // p(x) : roundTimeTrip(x) <= D

       low = max_elt, high = sum_weight;

       while(low < high) {

           mid = low + (high - low)/2;

           if(roundTimeTrip(mid,weights) <= d)  

               high = mid;

           else

               low = mid + 1;

       }

       return low;

}
*/
https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
 
