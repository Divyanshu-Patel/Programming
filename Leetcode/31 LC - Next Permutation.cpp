class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();
        int f,s;
        
        for(f=n-2; f>=0; f--){
            if(nums[f]<nums[f+1]){
                break;
            }
        }
        
        if(f<0){
            reverse(nums.begin(), nums.end());
        }
        
        else{
            for(s=n-1; s>f; s--){
                if(nums[s]>nums[f]){
                    break;
                }
            }
            swap(nums[f],nums[s]);
            reverse(nums.begin()+f+1,nums.end());
        }
        
    }
};