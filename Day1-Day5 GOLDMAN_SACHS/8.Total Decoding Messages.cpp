//https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1/


int mod=1e9+7; 
class Solution {
	public:
	    
		int CountWays(string str){
		    int n=str.size();
		    int dp[n+1];
		    dp[0]=1;// An empty digit sequence is considered to have one decoding
		    dp[1]=1;//1char then only one possible
		    
		    if(n==1 && str[0]!='0')return 1; 
		    if(str[0]=='0')return 0; //cond given in ques
		    
		    for(int i=2;i<=n;i++)
		    {
		        dp[i]=0;
		        if(str[i-1]>'0')//count as single one
		        dp[i]=dp[i-1];
		        
		        if(str[i-2]=='1' || (str[i-2]=='2' && str[i-1]<='6')) //if mixing of both (prev*10=cur)<=26
		        dp[i]=(dp[i]+dp[i-2])%mod;
		    }
		    return dp[n];
		}
};
