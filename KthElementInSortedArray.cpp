Split each arr in two parts such that total elements of 1st part of both array is k in total and all those elements are lesser than all the elements of 2nd part.

int kthElement(int arr1[], int arr2[], int n, int m, int k){
        if (n>m)    return kthElement(arr2,arr1,m,n,k);
        int left=max(0,k-m),right=min (k,n);
        while (left<=right){
            int c1=(left+right)>>1;
            int c2=k-c1;
            int l1= c1 ? arr1[c1-1] : INT_MIN;
            int l2= c2 ? arr2[c2-1] : INT_MIN;
            int r1= c1>=n ? INT_MAX : arr1[c1];
            int r2= c2>=m ? INT_MAX : arr2[c2];
            if (l1>r2)  right=c1-1;
            else if (l2>r1) left=c1+1;
            else return max(l1,l2);
        }
        return 1;
    }
    
    https://practice.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=k-th-element-of-two-sorted-array
    

APPEROACH2:USE TWO POINTERS AND FORM A SINGLE SORTED ARRAY AND RETURN THE KTH INDEX O(N) APPROACH
