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

--------------------------------------------------------------------------------------------------------------------
code working-----------
eg-
n = 7 , k = 100
a[] = {1, 9, 2, 8, 6, 4, 3}

res=0  //result  // res=res+(right-left+1);
left=0 right=0
prod=1

res=1 (1)

--------------------------
left=0 right=1
prod=9
res=1+(2) // res=res+(right-left+1);

res=3 (1, 9, {1,9})

-------------------------
left=0 right=2
prod=18

res=3+3 // res=res+(right-left+1);
res=6 (1, 9, 2, {1,9} {9,2}, {1,9,2})
-------------------------

left=0  right=3
prod=144
now 144>=100
so prod/arr[left] as left=0

prod=prod/1  =>144  left=1 

prod=prod/9  =>16  left=2

now prod=16<100 so
using formulae  res=res+(right-left+1); 

left=2 right=3 
res=6+ (2) // res=res+(right-left+1);
res=8 (1, 9, 2, {1,9} {9,2}, {1,9,2}, 8,{2,8})
-----------------------------------------------------


left=2 right=4
prod=96 (from index 2-4)
res=8+ (3) // res=res+(right-left+1);
res=11 (1, 9, 2, {1,9} {9,2}, {1,9,2},8, {2,8}, 6, {8,6}, {2,8,6})

----------------------------------------------------

left=2 right=5
prod=384 

now 384>=100
so prod/arr[left] as left=2

prod=prod/2  =>192  left=3

prod=prod/8  =>24  left=4

now pro=24<100 so
using formulae  res=res+(right-left+1); 

left=4 right=5
res=11+ (2) // res=res+(right-left+1);
res=13 (1, 9, 2, {1,9} {9,2}, {1,9,2},8, {2,8}, 6, {8,6}, {2,8,6}, 4, {6,4})

----------------------------------------------------------------------------------

left=4 right=6
res=13+ (3) // res=res+(right-left+1);
res=16 (1, 9, 2, {1,9}, {9,2}, {1,9,2}, 8, {2,8}, 6, {8,6}, {2,8,6}, 4, {6,4}, 3, {4,3}, {6,4,3})
