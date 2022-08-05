class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size()+1;
        vector<int> mpx(n,0);
   
        for(int i=0; i<nums.size(); i++){
            mpx[nums[i]]++;
        }
        
        for(int i=0; i<=nums.size(); i++){
            if(mpx[i]==0){
                return i;
            }
        }
        
        return 0;
    }
};