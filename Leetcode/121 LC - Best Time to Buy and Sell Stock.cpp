class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP=0;
        int minimum=INT_MAX;
        int n = prices.size();
        for(int i=0; i<n; i++){
            minimum = min(minimum, prices[i]);
            maxP = max(maxP, prices[i]-minimum);
        }
        
        return maxP;
    }
};