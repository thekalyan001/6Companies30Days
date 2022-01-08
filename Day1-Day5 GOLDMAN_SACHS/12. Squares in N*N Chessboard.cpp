//https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1#

/*
see 
for n==1
  there is 1 sq2
for n==2
  there is 5 sq2
for n==3 
  there is 14 sq
  
  so using extra dp array we can solve this by adding => currEle*currEle+(previous element box value)
  
  for loop
  dp[i]=((i*i)+dp[i-1])%mod; //take mod=1e9+7 for avoid overflow
  O(n) time, O(n)space
  
  
  M-2 using variable to track the previous val output
  
  M-3 direct using formulae
  
  
  
*/
  
  int mod=1e9+7;
    long long squaresInChessBoard(long long n) {
      
      //O(n)time O(n)space
        // long long dp[n+1];
        // dp[1]=1;
        // for(long long i=2;i<=n;i++)
        // dp[i]=(i*i)+dp[i-1];
        
        // return dp[n];
      
      
      //O(n)time O(1)space
        long long ans=0;
        if(n==1)return 1;
        while(n>=0)
        {
            ans+=(n*n);
            n--;
        }
        
        return ans;
      
      //O(1)time O(1)space
      /*
      1^2+2^2+3^2+...+n^2=∑n^2= n(n+1)(2n+1)6.
      
      see if(n=3)
      
      then there are 
      1 size box= 9 (n*n)
      2 size box= 4 (n-1)(n-1)
      .
      .
      3 size box= 1 (1*1)
      
      so formula 
      1^2+2^2+3^2+...+n^2=∑n^2 = n(n+1)(2n+1)6.
      
      */
        return (n*(n+1)*(2*n+1))/6;
    }
