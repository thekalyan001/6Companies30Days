 //https://leetcode.com/problems/longest-mountain-in-array/

int longestMountain(vector<int>& arr) {
        int mx=0;
        int i=1; //index
        
        while(i<arr.size())
        {
            while(i<arr.size() && arr[i-1]==arr[i])
            {
                i++;
            }
            
            int up=0;
            while(i<arr.size() && arr[i-1]<arr[i])
            {
                i++; up++;
            }
            
            int down=0;
            while(i<arr.size() && arr[i-1]>arr[i])
            {
                i++; down++;
            }
            
            if(up>0 && down>0)
            mx=max(mx, up+down+1);
        }
        return mx;
    }
