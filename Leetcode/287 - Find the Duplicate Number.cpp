class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        /*Approach 1- NAIVE
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        
        
        Approach 2- HASHING/MAP
        
        vector<int> map(nums.size(), 0 );
        
        for(int i=0; i<nums.size(); i++){
            if(++map[nums[i]] > 1){
                return nums[i];
            }
        }
        
        
        
        
        Approach 3- LINKED LIST CYCLE METHOD _ TORTOISE */
        
        int slow = nums[0];
        int fast = nums[0];
        
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
            
        fast = nums[0];
        
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        
        return fast;
    }
};