//https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1
bool canPair(vector<int> nums, int k) {
       int rem[k]={0};
       int n=nums.size();
       for(int ele:nums)
       {
           rem[ele%k]++;  //store the reminder 
       }
       //9%6=3= count=1 , 3%6=3count=2
       if(rem[0]%2!=0)return false; //if reminder count is not pair
       
         for (int i = 1 ; i<k ; i++){ //if reminder of both side is not equal
           if (rem[i] != rem[k-i])
               return false;
       }
       return true;
       
    }
