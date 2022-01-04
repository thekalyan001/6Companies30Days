//https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/#
/*
n = 4, k = 10
a[] = {1, 2, 3, 4}
Output : 
7
Explanation:
The contiguous subarrays are {1}, {2}, {3}, {4} 
{1, 2}, {1, 2, 3} and {2, 3} whose count is 7.
*/

//Solution----------
int countSubArrayProductLessThanK(const vector<int>& arr, int n, long long k) {
        //number of all possible subarrays of an array of size N is N * (N + 1)/2. Let countSubarrays (N) = N * (N + 1)/2
        if(k<=1)return 0;
        long long res=0,prod=1;
        long long left=0,right=0;
        
        while(right<n)
        {
            prod*=arr[right];
            while(prod>=k) //if product is >=k then debar the left_Val & increment left 
            {
                prod/=arr[left];
                left++;
            }
            //formula to get the subarray 
            res+=right-left+1; //number of subarray, eg at index 0  (0-0+1=1 ele)
            right++;
        }
        return res;
    }
