int *findTwoElement(int arr[], int n) {
            
        int mod = n+1;
        
        for(int i =0 ; i < n; i++){
            
            int v = arr[i]%mod;
            arr[v-1]+=mod;    
        }
        
        int *ans = new int[2];
        for(int i = 0; i < n; i++){
            
            if(arr[i]/mod == 2)
            ans[0] = i+1;
            if(arr[i]/mod == 0)
            ans[1] = i+1;
            
            arr[i]%=mod;
        }
        
        return ans;
    }
