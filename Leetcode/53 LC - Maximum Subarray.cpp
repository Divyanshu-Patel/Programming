class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maximum = INT_MIN;
        for(auto ele:nums){
            sum+=ele;
            maximum = max(sum,maximum);
            if(sum<0){
                sum=0;
            }
        }
        
        return maximum;
    }
};