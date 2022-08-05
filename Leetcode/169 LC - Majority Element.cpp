class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        /* APPROACH 1 - SORTING & return nums[n/2]; */
        
        /* APPROACH 2 - UNORDERED MAP 
        
        unordered_map <int,int> mpx;
        for(auto x: nums){
            mpx[x]++;
        }
        
        int ans = nums[0];
        
        for(auto x: mpx){
            
            if(x.second > mpx[ans]){
                ans = x.first;
            }
            
        }
        
        return ans;
        
        */
        
        /* APPROACH 3 - VOTING ALGO */
        
        int count = 0;
        int ans = 0;
        for(auto x: nums){
            if(count == 0) ans = x;
            if(x == ans) count ++;
            else count--;
        }
        
        return ans;
        
        
    }
};