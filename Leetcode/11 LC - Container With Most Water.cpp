class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n = height.size();
        int left = 0, right = n-1, ans = 0, res = 0;
        
        while(left <= right){
            
            if(height[left] <= height[right]){
                
                res = height[left] * (right - left);
                left++;
                
            }
            
            else{
                res = height[right] * (right - left);
                right--;
            }
            
            ans = max(ans, res);
            
        }
        
        return ans;
        
    }
};