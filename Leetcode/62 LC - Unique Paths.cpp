class Solution {
public:
    
    /* Recursive - TLE
    
    int recurse(int s, int e, int m, int n){
        
        if(s>m || e>n){
            return 0;
        }
        
        if(s == m && e == n){
            return 1;
        }
        
        int first = recurse(s+1, e, m, n);
        int second = recurse(s, e+1, m, n);
        
        
        return first+second;
    }
    
    */
    
    /* DP 
    
    int dppaths(int s, int e, int m, int n, vector<vector<int>> &dp){
        if(s==m && e==n) return 1;
        if(s>m || e>n) return 0;
        
        if(dp[s][e] != -1) return dp[s][e];
        
        int first = dppaths(s+1, e, m, n, dp);
        int second = dppaths(s, e+1, m, n, dp);
        
        return dp[s][e] = first + second; 
        
    }
    
    */
    
    int uniquePaths(int m, int n) {
        
        // int ans = recurse(0, 0, m-1, n-1);
        
        // vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        // int ans = dppaths(0, 0, m-1, n-1, dp);
        
        int N = m+n-2;
        int r = m-1;
        
        //nCr
        
        double ans = 1;
        
        for(int i=1; i<=r; i++){
            ans = ans*(N-r+i)/i;
        }
        
        
        return (int)ans;
    }
};