class Solution {
public:
    
    int mem(vector<int> &num, int target,  vector<int> &dp){
        
        if(target<0) return 0;
        if(target == 0) return 1;
        
        if(dp[target] != -1){
            return dp[target];
        }
        
        int ans = 0;
        for(int i=0; i<num.size(); i++){
            ans += mem(num, target - num[i], dp);
        }
        
        dp[target] = ans;
        return dp[target];
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        
        vector<int> dp(target+1, -1);
        return mem(nums, target, dp);
    }
};