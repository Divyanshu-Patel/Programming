class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long target) {
        
        vector<vector<int>> ans;
        
        if(nums.size()==0) return ans;
        
        sort(nums.begin(), nums.end());
        
        long long n = nums.size();
        for(long long i=0; i<n; i++){
            long long target1 = target - nums[i];
            for(long long j=i+1; j<n; j++){
                
                long long target2 = target1 - nums[j];
                long long front = j+1;
                long long back = n-1;
                
                while(front < back){
                    
                    long long target3 = nums[front] + nums[back];
                    if(target3 > target2){
                        back--;
                    }
                    
                    else if(target3 < target2){
                        front++;
                    }
                    
                    else{
                        vector<int> minians(4,0);
                        minians[0] = nums[i];
                        minians[1] = nums[j];
                        minians[2] = nums[front];
                        minians[3] = nums[back];
                        ans.push_back(minians);
                        
                        while(front < back && nums[front] == minians[2] ) front++;
                        while(front < back && nums[back] == minians[3] ) back--;
                    }
                }
                while( j+1 < n && nums[j+1] == nums[j] ) j++;
            }
            while( i+1 < n && nums[i+1] == nums[i] ) i++;
        }
        return ans;
    }
};