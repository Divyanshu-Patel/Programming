class Solution {
public:
    
    int binary(vector<int> &nums, int target, char c){
        
        int x= -1;
        int l=0; 
        int r=nums.size()-1;
        
        while(l<=r){
            int mid = l + (r-l)/2;
        
            if(nums[mid] == target){
                x = mid;
                if(c=='f') r=mid-1;
                else l=mid+1;
            
            }
        
            else if(nums[mid]>target) r=mid-1;
            else l = mid+1;
        }
        
        return x;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        return {binary(nums, target, 'f'), binary(nums, target, 'l')};
    }
};